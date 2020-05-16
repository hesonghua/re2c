/* Generated by re2c */
#line 1 "cunroll.re"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define	ADDEQ	257
#define	ANDAND	258
#define	ANDEQ	259
#define	ARRAY	260
#define	ASM	261
#define	AUTO	262
#define	BREAK	263
#define	CASE	264
#define	CHAR	265
#define	CONST	266
#define	CONTINUE	267
#define	DECR	268
#define	DEFAULT	269
#define	DEREF	270
#define	DIVEQ	271
#define	DO	272
#define	DOUBLE	273
#define	ELLIPSIS	274
#define	ELSE	275
#define	ENUM	276
#define	EQL	277
#define	EXTERN	278
#define	FCON	279
#define	FLOAT	280
#define	FOR	281
#define	FUNCTION	282
#define	GEQ	283
#define	GOTO	284
#define	ICON	285
#define	ID	286
#define	IF	287
#define	INCR	288
#define	INT	289
#define	LEQ	290
#define	LONG	291
#define	LSHIFT	292
#define	LSHIFTEQ	293
#define	MODEQ	294
#define	MULEQ	295
#define	NEQ	296
#define	OREQ	297
#define	OROR	298
#define	POINTER	299
#define	REGISTER	300
#define	RETURN	301
#define	RSHIFT	302
#define	RSHIFTEQ	303
#define	SCON	304
#define	SHORT	305
#define	SIGNED	306
#define	SIZEOF	307
#define	STATIC	308
#define	STRUCT	309
#define	SUBEQ	310
#define	SWITCH	311
#define	TYPEDEF	312
#define	UNION	313
#define	UNSIGNED	314
#define	VOID	315
#define	VOLATILE	316
#define	WHILE	317
#define	XOREQ	318
#define	EOI	319

typedef unsigned int uint;
typedef unsigned char uchar;

#define	BSIZE	8192

#define	YYCTYPE		uchar
#define	YYCURSOR	cursor
#define	YYLIMIT		s->lim
#define	YYMARKER	s->ptr
#define	YYFILL(n)	{cursor = fill(s, cursor);}

#define	RET(i)	{s->cur = cursor; return i;}

typedef struct Scanner {
    int			fd;
    uchar		*bot, *tok, *ptr, *cur, *pos, *lim, *top, *eof;
    uint		line;
} Scanner;

uchar *fill(Scanner *s, uchar *cursor){
    if(!s->eof){
	uint cnt = s->tok - s->bot;
	if(cnt){
	    memcpy(s->bot, s->tok, s->lim - s->tok);
	    s->tok = s->bot;
	    s->ptr -= cnt;
	    cursor -= cnt;
	    s->pos -= cnt;
	    s->lim -= cnt;
	}
	if((s->top - s->lim) < BSIZE){
	    uchar *buf = (uchar*) malloc(((s->lim - s->bot) + BSIZE)*sizeof(uchar));
	    memcpy(buf, s->tok, s->lim - s->tok);
	    s->tok = buf;
	    s->ptr = &buf[s->ptr - s->bot];
	    cursor = &buf[cursor - s->bot];
	    s->pos = &buf[s->pos - s->bot];
	    s->lim = &buf[s->lim - s->bot];
	    s->top = &s->lim[BSIZE];
	    free(s->bot);
	    s->bot = buf;
	}
	if((cnt = read(s->fd, (char*) s->lim, BSIZE)) != BSIZE){
	    s->eof = &s->lim[cnt]; *(s->eof)++ = '\n';
	}
	s->lim += cnt;
    }
    return cursor;
}

int scan(Scanner *s){
	uchar *cursor = s->cur;
std:
	s->tok = cursor;
#line 135 "cunroll.re"



#line 130 "cunroll.c"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 9) YYFILL(9);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\v':
	case '\f':
	case ' ':	goto yy4;
	case '\n':	goto yy7;
	case '!':	goto yy9;
	case '"':	goto yy11;
	case '%':	goto yy12;
	case '&':	goto yy14;
	case '\'':	goto yy16;
	case '(':	goto yy17;
	case ')':	goto yy19;
	case '*':	goto yy21;
	case '+':	goto yy23;
	case ',':	goto yy25;
	case '-':	goto yy27;
	case '.':	goto yy29;
	case '/':	goto yy31;
	case '0':	goto yy33;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy35;
	case ':':	goto yy37;
	case ';':	goto yy39;
	case '<':	goto yy41;
	case '=':	goto yy43;
	case '>':	goto yy45;
	case '?':	goto yy47;
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy49;
	case '[':	goto yy51;
	case ']':	goto yy53;
	case '^':	goto yy55;
	case '{':	goto yy57;
	case '|':	goto yy59;
	case '}':	goto yy61;
	case '~':	goto yy63;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 219 "cunroll.re"
	{
		printf("unexpected character: %c\n", *s->tok);
		goto std;
	    }
#line 241 "cunroll.c"
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\v':
	case '\f':
	case ' ':	goto yy4;
	default:	goto yy6;
	}
yy6:
#line 209 "cunroll.re"
	{ goto std; }
#line 256 "cunroll.c"
yy7:
	++YYCURSOR;
#line 212 "cunroll.re"
	{
		if(cursor == s->eof) RET(EOI);
		s->pos = cursor; s->line++;
		goto std;
	    }
#line 265 "cunroll.c"
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case '=':	goto yy65;
	default:	goto yy10;
	}
yy10:
#line 195 "cunroll.re"
	{ RET('!'); }
#line 275 "cunroll.c"
yy11:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy3;
	default:	goto yy68;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case '=':	goto yy73;
	default:	goto yy13;
	}
yy13:
#line 201 "cunroll.re"
	{ RET('%'); }
#line 292 "cunroll.c"
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case '&':	goto yy75;
	case '=':	goto yy77;
	default:	goto yy15;
	}
yy15:
#line 194 "cunroll.re"
	{ RET('&'); }
#line 303 "cunroll.c"
yy16:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy3;
	default:	goto yy80;
	}
yy17:
	++YYCURSOR;
#line 189 "cunroll.re"
	{ RET('('); }
#line 315 "cunroll.c"
yy19:
	++YYCURSOR;
#line 190 "cunroll.re"
	{ RET(')'); }
#line 320 "cunroll.c"
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case '=':	goto yy83;
	default:	goto yy22;
	}
yy22:
#line 199 "cunroll.re"
	{ RET('*'); }
#line 330 "cunroll.c"
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
	case '+':	goto yy85;
	case '=':	goto yy87;
	default:	goto yy24;
	}
yy24:
#line 198 "cunroll.re"
	{ RET('+'); }
#line 341 "cunroll.c"
yy25:
	++YYCURSOR;
#line 186 "cunroll.re"
	{ RET(','); }
#line 346 "cunroll.c"
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
	case '-':	goto yy89;
	case '=':	goto yy91;
	case '>':	goto yy93;
	default:	goto yy28;
	}
yy28:
#line 197 "cunroll.re"
	{ RET('-'); }
#line 358 "cunroll.c"
yy29:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '.':	goto yy95;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy96;
	default:	goto yy30;
	}
yy30:
#line 193 "cunroll.re"
	{ RET('.'); }
#line 379 "cunroll.c"
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
	case '*':	goto yy99;
	case '=':	goto yy101;
	default:	goto yy32;
	}
yy32:
#line 200 "cunroll.re"
	{ RET('/'); }
#line 390 "cunroll.c"
yy33:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'X':
	case 'x':	goto yy106;
	default:	goto yy36;
	}
yy34:
#line 153 "cunroll.re"
	{ RET(ICON); }
#line 402 "cunroll.c"
yy35:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
yy36:
	switch (yych) {
	case '.':	goto yy96;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy35;
	case 'E':
	case 'e':	goto yy103;
	case 'L':
	case 'U':
	case 'l':
	case 'u':	goto yy104;
	default:	goto yy34;
	}
yy37:
	++YYCURSOR;
#line 187 "cunroll.re"
	{ RET(':'); }
#line 433 "cunroll.c"
yy39:
	++YYCURSOR;
#line 183 "cunroll.re"
	{ RET(';'); }
#line 438 "cunroll.c"
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
	case '<':	goto yy107;
	case '=':	goto yy109;
	default:	goto yy42;
	}
yy42:
#line 202 "cunroll.re"
	{ RET('<'); }
#line 449 "cunroll.c"
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
	case '=':	goto yy111;
	default:	goto yy44;
	}
yy44:
#line 188 "cunroll.re"
	{ RET('='); }
#line 459 "cunroll.c"
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
	case '=':	goto yy113;
	case '>':	goto yy115;
	default:	goto yy46;
	}
yy46:
#line 203 "cunroll.re"
	{ RET('>'); }
#line 470 "cunroll.c"
yy47:
	++YYCURSOR;
#line 206 "cunroll.re"
	{ RET('?'); }
#line 475 "cunroll.c"
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy117;
	default:	goto yy50;
	}
yy50:
#line 141 "cunroll.re"
	{ RET(ID); }
#line 547 "cunroll.c"
yy51:
	++YYCURSOR;
#line 191 "cunroll.re"
	{ RET('['); }
#line 552 "cunroll.c"
yy53:
	++YYCURSOR;
#line 192 "cunroll.re"
	{ RET(']'); }
#line 557 "cunroll.c"
yy55:
	yych = *++YYCURSOR;
	switch (yych) {
	case '=':	goto yy119;
	default:	goto yy56;
	}
yy56:
#line 204 "cunroll.re"
	{ RET('^'); }
#line 567 "cunroll.c"
yy57:
	++YYCURSOR;
#line 184 "cunroll.re"
	{ RET('{'); }
#line 572 "cunroll.c"
yy59:
	yych = *++YYCURSOR;
	switch (yych) {
	case '=':	goto yy121;
	case '|':	goto yy123;
	default:	goto yy60;
	}
yy60:
#line 205 "cunroll.re"
	{ RET('|'); }
#line 583 "cunroll.c"
yy61:
	++YYCURSOR;
#line 185 "cunroll.re"
	{ RET('}'); }
#line 588 "cunroll.c"
yy63:
	++YYCURSOR;
#line 196 "cunroll.re"
	{ RET('~'); }
#line 593 "cunroll.c"
yy65:
	++YYCURSOR;
#line 182 "cunroll.re"
	{ RET(NEQ); }
#line 598 "cunroll.c"
yy67:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy68:
	switch (yych) {
	case '\n':	goto yy69;
	case '"':	goto yy70;
	case '\\':	goto yy72;
	default:	goto yy67;
	}
yy69:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0:
		goto yy3;
	case 1:
		goto yy30;
	case 2:
		goto yy34;
	default:
		goto yy98;
	}
yy70:
	++YYCURSOR;
#line 159 "cunroll.re"
	{ RET(SCON); }
#line 626 "cunroll.c"
yy72:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '"':
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '?':
	case '\\':
	case 'a':
	case 'b':
	case 'f':
	case 'n':
	case 'r':
	case 't':
	case 'v':	goto yy67;
	case 'x':	goto yy125;
	default:	goto yy69;
	}
yy73:
	++YYCURSOR;
#line 168 "cunroll.re"
	{ RET(MODEQ); }
#line 658 "cunroll.c"
yy75:
	++YYCURSOR;
#line 177 "cunroll.re"
	{ RET(ANDAND); }
#line 663 "cunroll.c"
yy77:
	++YYCURSOR;
#line 169 "cunroll.re"
	{ RET(ANDEQ); }
#line 668 "cunroll.c"
yy79:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy80:
	switch (yych) {
	case '\n':	goto yy69;
	case '\'':	goto yy81;
	case '\\':	goto yy82;
	default:	goto yy79;
	}
yy81:
	++YYCURSOR;
	goto yy34;
yy82:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '"':
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '?':
	case '\\':
	case 'a':
	case 'b':
	case 'f':
	case 'n':
	case 'r':
	case 't':
	case 'v':	goto yy79;
	case 'x':	goto yy126;
	default:	goto yy69;
	}
yy83:
	++YYCURSOR;
#line 166 "cunroll.re"
	{ RET(MULEQ); }
#line 714 "cunroll.c"
yy85:
	++YYCURSOR;
#line 174 "cunroll.re"
	{ RET(INCR); }
#line 719 "cunroll.c"
yy87:
	++YYCURSOR;
#line 164 "cunroll.re"
	{ RET(ADDEQ); }
#line 724 "cunroll.c"
yy89:
	++YYCURSOR;
#line 175 "cunroll.re"
	{ RET(DECR); }
#line 729 "cunroll.c"
yy91:
	++YYCURSOR;
#line 165 "cunroll.re"
	{ RET(SUBEQ); }
#line 734 "cunroll.c"
yy93:
	++YYCURSOR;
#line 176 "cunroll.re"
	{ RET(DEREF); }
#line 739 "cunroll.c"
yy95:
	yych = *++YYCURSOR;
	switch (yych) {
	case '.':	goto yy127;
	default:	goto yy69;
	}
yy96:
	yyaccept = 3;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy96;
	case 'E':
	case 'e':	goto yy103;
	case 'F':
	case 'L':
	case 'f':
	case 'l':	goto yy129;
	default:	goto yy98;
	}
yy98:
#line 156 "cunroll.re"
	{ RET(FCON); }
#line 773 "cunroll.c"
yy99:
	++YYCURSOR;
#line 138 "cunroll.re"
	{ goto comment; }
#line 778 "cunroll.c"
yy101:
	++YYCURSOR;
#line 167 "cunroll.re"
	{ RET(DIVEQ); }
#line 783 "cunroll.c"
yy103:
	yych = *++YYCURSOR;
	switch (yych) {
	case '+':
	case '-':	goto yy130;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy131;
	default:	goto yy69;
	}
yy104:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'L':
	case 'U':
	case 'l':
	case 'u':	goto yy104;
	default:	goto yy34;
	}
yy106:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy133;
	default:	goto yy69;
	}
yy107:
	yych = *++YYCURSOR;
	switch (yych) {
	case '=':	goto yy135;
	default:	goto yy108;
	}
yy108:
#line 173 "cunroll.re"
	{ RET(LSHIFT); }
#line 848 "cunroll.c"
yy109:
	++YYCURSOR;
#line 179 "cunroll.re"
	{ RET(LEQ); }
#line 853 "cunroll.c"
yy111:
	++YYCURSOR;
#line 181 "cunroll.re"
	{ RET(EQL); }
#line 858 "cunroll.c"
yy113:
	++YYCURSOR;
#line 180 "cunroll.re"
	{ RET(GEQ); }
#line 863 "cunroll.c"
yy115:
	yych = *++YYCURSOR;
	switch (yych) {
	case '=':	goto yy137;
	default:	goto yy116;
	}
yy116:
#line 172 "cunroll.re"
	{ RET(RSHIFT); }
#line 873 "cunroll.c"
yy117:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy139;
	default:	goto yy118;
	}
yy118:
#line 142 "cunroll.re"
	{ RET(ID); }
#line 945 "cunroll.c"
yy119:
	++YYCURSOR;
#line 170 "cunroll.re"
	{ RET(XOREQ); }
#line 950 "cunroll.c"
yy121:
	++YYCURSOR;
#line 171 "cunroll.re"
	{ RET(OREQ); }
#line 955 "cunroll.c"
yy123:
	++YYCURSOR;
#line 178 "cunroll.re"
	{ RET(OROR); }
#line 960 "cunroll.c"
yy125:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy67;
	default:	goto yy69;
	}
yy126:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy79;
	default:	goto yy69;
	}
yy127:
	++YYCURSOR;
#line 161 "cunroll.re"
	{ RET(ELLIPSIS); }
#line 1023 "cunroll.c"
yy129:
	++YYCURSOR;
	goto yy98;
yy130:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy131;
	default:	goto yy69;
	}
yy131:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy131;
	case 'F':
	case 'L':
	case 'f':
	case 'l':	goto yy129;
	default:	goto yy98;
	}
yy133:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy133;
	case 'L':
	case 'U':
	case 'l':
	case 'u':	goto yy104;
	default:	goto yy34;
	}
yy135:
	++YYCURSOR;
#line 163 "cunroll.re"
	{ RET(LSHIFTEQ); }
#line 1100 "cunroll.c"
yy137:
	++YYCURSOR;
#line 162 "cunroll.re"
	{ RET(RSHIFTEQ); }
#line 1105 "cunroll.c"
yy139:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy141;
	default:	goto yy140;
	}
yy140:
#line 143 "cunroll.re"
	{ RET(ID); }
#line 1177 "cunroll.c"
yy141:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy143;
	default:	goto yy142;
	}
yy142:
#line 144 "cunroll.re"
	{ RET(ID); }
#line 1249 "cunroll.c"
yy143:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy145;
	default:	goto yy144;
	}
yy144:
#line 145 "cunroll.re"
	{ RET(ID); }
#line 1321 "cunroll.c"
yy145:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy147;
	default:	goto yy146;
	}
yy146:
#line 146 "cunroll.re"
	{ RET(ID); }
#line 1393 "cunroll.c"
yy147:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy149;
	default:	goto yy148;
	}
yy148:
#line 147 "cunroll.re"
	{ RET(ID); }
#line 1465 "cunroll.c"
yy149:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy151;
	default:	goto yy150;
	}
yy150:
#line 148 "cunroll.re"
	{ RET(ID); }
#line 1537 "cunroll.c"
yy151:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy151;
	default:	goto yy153;
	}
yy153:
#line 149 "cunroll.re"
	{ RET(ID); }
#line 1611 "cunroll.c"
}
#line 223 "cunroll.re"


comment:

#line 1618 "cunroll.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 8) YYFILL(8);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy158;
	case '*':	goto yy160;
	case '/':	goto yy162;
	default:	goto yy156;
	}
yy156:
	yych = *++YYCURSOR;
	switch (yych) {
	case '*':
	case '/':	goto yy157;
	default:	goto yy163;
	}
yy157:
#line 234 "cunroll.re"
	{ goto comment; }
#line 1639 "cunroll.c"
yy158:
	yych = *++YYCURSOR;
	switch (yych) {
	case '*':
	case '/':	goto yy159;
	default:	goto yy163;
	}
yy159:
#line 229 "cunroll.re"
	{
		if(cursor == s->eof) RET(EOI);
		s->tok = s->pos = cursor; s->line++;
		goto comment;
	    }
#line 1654 "cunroll.c"
yy160:
	yych = *++YYCURSOR;
	switch (yych) {
	case '/':	goto yy165;
	default:	goto yy161;
	}
yy161:
#line 242 "cunroll.re"
	{ goto comment; }
#line 1664 "cunroll.c"
yy162:
	++YYCURSOR;
	goto yy161;
yy163:
	yych = *++YYCURSOR;
	switch (yych) {
	case '*':
	case '/':	goto yy164;
	default:	goto yy167;
	}
yy164:
#line 235 "cunroll.re"
	{ goto comment; }
#line 1678 "cunroll.c"
yy165:
	++YYCURSOR;
#line 227 "cunroll.re"
	{ goto std; }
#line 1683 "cunroll.c"
yy167:
	yych = *++YYCURSOR;
	switch (yych) {
	case '*':
	case '/':	goto yy168;
	default:	goto yy169;
	}
yy168:
#line 236 "cunroll.re"
	{ goto comment; }
#line 1694 "cunroll.c"
yy169:
	yych = *++YYCURSOR;
	switch (yych) {
	case '*':
	case '/':	goto yy170;
	default:	goto yy171;
	}
yy170:
#line 237 "cunroll.re"
	{ goto comment; }
#line 1705 "cunroll.c"
yy171:
	yych = *++YYCURSOR;
	switch (yych) {
	case '*':
	case '/':	goto yy172;
	default:	goto yy173;
	}
yy172:
#line 238 "cunroll.re"
	{ goto comment; }
#line 1716 "cunroll.c"
yy173:
	yych = *++YYCURSOR;
	switch (yych) {
	case '*':
	case '/':	goto yy174;
	default:	goto yy175;
	}
yy174:
#line 239 "cunroll.re"
	{ goto comment; }
#line 1727 "cunroll.c"
yy175:
	yych = *++YYCURSOR;
	switch (yych) {
	case '*':
	case '/':	goto yy176;
	default:	goto yy177;
	}
yy176:
#line 240 "cunroll.re"
	{ goto comment; }
#line 1738 "cunroll.c"
yy177:
	++YYCURSOR;
#line 241 "cunroll.re"
	{ goto comment; }
#line 1743 "cunroll.c"
}
#line 243 "cunroll.re"

}

main(){
    Scanner in;
    int t;
    memset((char*) &in, 0, sizeof(in));
    in.fd = 0;
    while((t = scan(&in)) != EOI){
/*
	printf("%d\t%.*s\n", t, in.cur - in.tok, in.tok);
	printf("%d\n", t);
*/
    }
    close(in.fd);
}
