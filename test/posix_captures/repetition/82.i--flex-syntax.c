/* Generated by re2c */

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy5;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy6;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = YYCURSOR;
		goto yy7;
	case 'b':
		yyt2 = YYCURSOR;
		goto yy10;
	case 'c':
		yyt2 = YYCURSOR;
		goto yy11;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0:
		goto yy2;
	case 1:
		yyt3 = yyt4 = YYCURSOR;
		goto yy9;
	default:
		yyt2 = yyt4;
		yyt3 = yyt4 = YYCURSOR;
		goto yy9;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy13;
	default:	goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
	case 'b':
	case 'c':	goto yy12;
	default:	goto yy4;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = YYCURSOR;
		goto yy7;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy15;
	case 'c':
		yyt2 = YYCURSOR;
		goto yy11;
	case 'd':
		yyt3 = yyt4 = YYCURSOR;
		goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		goto yy9;
	}
yy9:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = YYCURSOR;
		goto yy7;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy14;
	case 'c':
		yyt4 = YYCURSOR;
		goto yy18;
	default:	goto yy4;
	}
yy11:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy12:
	switch (yych) {
	case 'a':
		yyt2 = YYCURSOR;
		goto yy7;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy14;
	case 'c':
		yyt2 = YYCURSOR;
		goto yy11;
	case 'd':
		yyt3 = yyt4 = YYCURSOR;
		goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		goto yy9;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy6;
	default:	goto yy4;
	}
yy14:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy19;
	default:	goto yy4;
	}
yy15:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = YYCURSOR;
		goto yy7;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy14;
	case 'c':
		yyt2 = yyt3;
		yyt4 = YYCURSOR;
		goto yy18;
	case 'd':
		yyt3 = yyt4 = YYCURSOR;
		goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		goto yy9;
	}
yy16:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy16;
	default:	goto yy9;
	}
yy18:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = YYCURSOR;
		goto yy7;
	case 'b':
		yyt3 = YYCURSOR;
		goto yy14;
	case 'c':
		yyt2 = YYCURSOR;
		goto yy11;
	case 'd':	goto yy11;
	default:
		yyt2 = yyt4;
		yyt3 = yyt4 = YYCURSOR;
		goto yy9;
	}
yy19:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':
		yyt2 = yyt3;
		goto yy11;
	default:	goto yy4;
	}
}

posix_captures/repetition/82.i--flex-syntax.re:6:7: warning: rule matches empty string [-Wmatch-empty-string]
