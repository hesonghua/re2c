/* Generated by re2c */

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	switch (YYGETCONDITION()) {
	case yycc1:
		goto yyc_c1;
	case yycc2:
		goto yyc_c2;
	}
/* *********************************** */
yyc_c1:
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy4;
	default:	goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy5;
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'b':	goto yy6;
	default:	goto yy5;
	}
yy5:
	{}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy7;
	default:	goto yy3;
	}
yy7:
	++YYCURSOR;
	{}
/* *********************************** */
yyc_c2:
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy12;
	default:	goto yy11;
	}
yy11:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy13;
	} else {
		goto yy16;
	}
yy12:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':	goto yy14;
	default:	goto yy13;
	}
yy13:
	{}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy15;
	default:	goto yy11;
	}
yy15:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':	goto yy17;
	default:	goto yy16;
	}
yy16:
	{}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy18;
	default:	goto yy11;
	}
yy18:
	++YYCURSOR;
	{}
}

bug59_bogus_yyaccept.ci.re:10:2: warning: control flow in condition 'c1' is undefined for strings that match '[\x0-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
bug59_bogus_yyaccept.ci.re:10:2: warning: control flow in condition 'c2' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
