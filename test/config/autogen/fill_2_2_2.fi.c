/* Generated by re2c */
// re2c:define:YYFILL = "fill(need);";
// re2c:define:YYFILL@len = need;
// re2c:yyfill:check = 1;


	switch (YYGETSTATE()) {
	default:
		goto yy0;
	case 0:
		goto yyFillLabel0;
	}
yy0:
	YYSETSTATE(0);
	if (YYLIMIT <= YYCURSOR) fill(1);(1);
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
	{ x }
yy4:
	++YYCURSOR;
	{ a }

