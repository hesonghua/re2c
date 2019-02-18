#include "lib/lex.h"
#include "lib/regex.h"
#include "src/options/opt.h"
#include "src/nfa/nfa.h"
#include "src/dfa/dfa.h"


namespace re2c {

int lex(const char *pattern);
const AST *regexp;

} // namespace re2c

using namespace re2c;

int regcomp(regex_t *preg, const char *pattern, int cflags)
{
    conopt_t globopts;
    globopts.FFlag = true;
    Opt opts(globopts);
    Msg msg;
    opts.set_posix_syntax(true);
    opts.set_posix_semantics((cflags & REG_LEFTMOST) == 0);
    const opt_t *opt = opts.snapshot();
    preg->flags = cflags;

    const AST *a = parse(pattern);

    preg->rmgr = new RangeMgr;

    ASTRule ar(a, new Code(NOWHERE));
    std::vector<ASTRule> arv;
    arv.push_back(ar);
    RESpec re(arv, opt, msg, *preg->rmgr);

    find_fixed_tags(re);

    insert_default_tags(re);

    nfa_t *nfa = new nfa_t(re);

    DASSERT(nfa->rules.size() == 1);
    preg->re_nsub = nfa->rules[0].ncap + 1;
    preg->pmatch = new regmatch_t[preg->re_nsub];

    dfa_t *dfa = NULL;
    if (cflags & REG_NFA) {
        const size_t ntags = 2 * (preg->re_nsub - 1);
        preg->done = new bool[ntags];
        if (!(cflags & REG_TRIE)) {
            const size_t sz = ntags * nfa->ncores;
            preg->offsets1 = new regoff_t[sz];
            preg->offsets2 = new regoff_t[sz];
            preg->offsets3 = new regoff_t[ntags];
        }
        if (!(cflags & REG_LEFTMOST) && !(cflags & REG_TRIE)) {
            const size_t sz = nfa->ncores * nfa->ncores;
            preg->prectbl1 = new int32_t[sz];
            preg->prectbl2 = new int32_t[sz];
        }
    }
    else {
        preg->char2class = new size_t[256];
        split_charset(re);
        for (uint32_t i = 1, j = 0; i < re.charset.size(); ++i) {
            for (; j < re.charset[i]; ++j) {
                preg->char2class[j] = i - 1;
            }
        }

        dfa = new dfa_t(*nfa, opt, "", msg);

        compact_and_optimize_tags(opt, *dfa);

        preg->regs = new regoff_t[dfa->maxtagver + 1];
    }

    preg->nfa = nfa;
    preg->dfa = dfa;

    delete opt;
    return 0;
}