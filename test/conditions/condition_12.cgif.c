/* Generated by re2c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	BSIZE	8192

enum ScanContition {
	EStateNormal,
	EStateComment,
	EStateSkiptoeol,
	EStateString,
};


typedef struct Scanner
{
	FILE			    *fp;
	unsigned char	    *cur, *tok, *lim, *eof;
	unsigned char 	    buffer[BSIZE];
	unsigned char       yych;
	enum ScanContition  cond;
	int                 state;
} Scanner;

size_t fill(Scanner *s, size_t len)
{
	size_t got = ~0, cnt;

	if (!s->eof && s->lim - s->tok < len)
	{
		if (s->tok > s->buffer)
		{
			cnt = s->tok - s->buffer;
			memcpy(s->buffer, s->tok, s->lim - s->tok);
			s->tok -= cnt;
			s->cur -= cnt;
			s->lim -= cnt;
			cnt = &s->buffer[BSIZE] - s->lim;
		}
		else
		{
			cnt = BSIZE;
		}
		if ((got = fread(s->lim, 1, cnt, s->fp)) != cnt)
		{
			s->eof = &s->lim[got];
		}
		s->lim += got;
	}
	if (s->eof && s->cur + len > s->eof)
	{
		return ~0; /* not enough input data */
	}
	return got;
}

size_t init(Scanner *s)
{
	s->cur = s->tok = s->lim = s->buffer;
	s->eof = 0;
	s->cond = EStateNormal;
	s->state = -1;

	return fill(s, 0);
}

void fputl(const char *s, size_t len, FILE *stream)
{
	while(len-- > 0)
	{
		fputc(*s++, stream);
	}
}

void scan(Scanner *s)
{
	s->tok = s->cur;

	switch (s->state) {
	default:
		goto yy0;
	case 0:
		goto yyFillLabel0;
	case 1:
		goto yyFillLabel1;
	case 2:
		goto yyFillLabel2;
	case 3:
		goto yyFillLabel3;
	}

	for(;;)
	{
		s->tok = s->cur;

		{

			static void *yyctable[4] = {
				&&yyc_Normal,
				&&yyc_Comment,
				&&yyc_Skiptoeol,
				&&yyc_String,
			};
yy0:
			goto *yyctable[s->cond];
/* *********************************** */
yyc_Normal:
			s->state = 0;(0);
			if ((s->lim - s->cur) < 4) if(fill(s, 4) == ~0) break;
yyFillLabel0:
			s->yych = *s->cur;
			{
				static void *yytarget[256] = {
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy5, &&yy3, &&yy3, &&yy3, &&yy3, &&yy7,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy8,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy9,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3,
					&&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3, &&yy3
				};
				goto *yytarget[s->yych];
			}
yy3:
			++s->cur;
yy4:
			fputc(s->cur[-1], stdout);
			continue;
yy5:
			++s->cur;
			s->cond = EStateString;(EStateString);
			fputc(s->cur[-1], stdout);
			continue;
yy7:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '"') goto yy10;
			if (s->yych == '\\') goto yy12;
			goto yy4;
yy8:
			s->yych = *++s->cur;
			if (s->yych == '*') goto yy13;
			if (s->yych == '/') goto yy15;
			goto yy4;
yy9:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '?') goto yy17;
			goto yy4;
yy10:
			s->yych = *++s->cur;
			if (s->yych == '\'') goto yy18;
yy11:
			s->cur = s->tok;
			goto yy4;
yy12:
			s->yych = *++s->cur;
			if (s->yych == '"') goto yy10;
			goto yy11;
yy13:
			++s->cur;
			s->cond = EStateComment;(EStateComment);
			goto yyc_Comment;
yy15:
			++s->cur;
			s->cond = EStateSkiptoeol;(EStateSkiptoeol);
			goto yyc_Skiptoeol;
yy17:
			s->yych = *++s->cur;
			{
				static void *yytarget[256] = {
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy20, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy22,
					&&yy24, &&yy26, &&yy11, &&yy11, &&yy11, &&yy28, &&yy11, &&yy30,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy32, &&yy34, &&yy36, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11,
					&&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11, &&yy11
				};
				goto *yytarget[s->yych];
			}
yy18:
			++s->cur;
			fputl("'\"'", 3, stdout);
			continue;
yy20:
			++s->cur;
			fputc('|', stdout);
			continue;
yy22:
			++s->cur;
			fputc('^', stdout);
			continue;
yy24:
			++s->cur;
			fputc('[', stdout);
			continue;
yy26:
			++s->cur;
			fputc(']', stdout);
			continue;
yy28:
			++s->cur;
			fputc('~', stdout);
			continue;
yy30:
			++s->cur;
			fputc('\\', stdout);
			continue;
yy32:
			++s->cur;
			fputc('{', stdout);
			continue;
yy34:
			++s->cur;
			fputc('#', stdout);
			continue;
yy36:
			++s->cur;
			fputc('}', stdout);
			continue;
/* *********************************** */
yyc_Comment:
			s->state = 1;(1);
			if ((s->lim - s->cur) < 2) if(fill(s, 2) == ~0) break;
yyFillLabel1:
			s->yych = *s->cur;
			if (s->yych == '*') goto yy42;
			++s->cur;
yy41:
			goto yyc_Comment;
yy42:
			s->yych = *++s->cur;
			if (s->yych != '/') goto yy41;
			++s->cur;
			s->cond = EStateNormal;(EStateNormal);
			goto yyc_Normal;
/* *********************************** */
yyc_Skiptoeol:
			s->state = 2;(2);
			if ((s->lim - s->cur) < 5) if(fill(s, 5) == ~0) break;
yyFillLabel2:
			s->yych = *s->cur;
			{
				static void *yytarget[256] = {
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy49, &&yy47, &&yy47, &&yy51, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy52,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy53, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47,
					&&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47, &&yy47
				};
				goto *yytarget[s->yych];
			}
yy47:
			++s->cur;
yy48:
			goto yyc_Skiptoeol;
yy49:
			++s->cur;
			s->cond = EStateNormal;(EStateNormal);
			fputc('\n', stdout);
			continue;
yy51:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy54;
			goto yy48;
yy52:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '?') goto yy56;
			goto yy48;
yy53:
			s->yych = *(s->tok = ++s->cur);
			if (s->yych == '\n') goto yy58;
			if (s->yych == '\r') goto yy60;
			goto yy48;
yy54:
			++s->cur;
			s->cond = EStateNormal;(EStateNormal);
			fputc('\r', stdout);
			fputc('\n', stdout);
			continue;
yy56:
			s->yych = *++s->cur;
			if (s->yych == '/') goto yy61;
yy57:
			s->cur = s->tok;
			goto yy48;
yy58:
			++s->cur;
			goto yyc_Skiptoeol;
yy60:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy58;
			goto yy57;
yy61:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy62;
			if (s->yych == '\r') goto yy64;
			goto yy57;
yy62:
			++s->cur;
			goto yyc_Skiptoeol;
yy64:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy62;
			goto yy57;
/* *********************************** */
yyc_String:
			s->state = 3;(3);
			if ((s->lim - s->cur) < 2) if(fill(s, 2) == ~0) break;
yyFillLabel3:
			s->yych = *s->cur;
			if (s->yych == '"') goto yy69;
			if (s->yych == '\\') goto yy71;
			++s->cur;
yy68:
			fputc(s->cur[-1], stdout);
			continue;
yy69:
			++s->cur;
			s->cond = EStateNormal;(EStateNormal);
			fputc(s->cur[-1], stdout);
			continue;
yy71:
			s->yych = *++s->cur;
			if (s->yych == '\n') goto yy68;
			++s->cur;
			fputl((const char*)s->cur-2, 2, stdout);
			continue;
		}

	}
}

int main(int argc, char **argv)
{
	Scanner in;

	if (argc != 2)
	{
		fprintf(stderr, "%s <file>\n", argv[0]);
		return 1;;
	}

	memset((char*) &in, 0, sizeof(in));

	if (!strcmp(argv[1], "-"))
	{
		in.fp = stdin;
	}
	else if ((in.fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Cannot open file '%s'\n", argv[1]);
		return 1;
	}

	if (init(&in) > 0)
	{
 		scan(&in);
 	}

	if (in.fp != stdin)
	{
		fclose(in.fp);
	}
	return 0;
}
