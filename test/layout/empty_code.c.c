/* Generated by re2c */
#line 1 "layout/empty_code.c.re"

#line 5 "layout/empty_code.c.c"
{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yyca:
		goto yyc_a;
	}
/* *********************************** */
yyc_a:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy3;
	}
yy3:
yy4:
	++YYCURSOR;
#line 3 "layout/empty_code.c.re"
	
#line 25 "layout/empty_code.c.c"
}
#line 5 "layout/empty_code.c.re"

layout/empty_code.c.re:5:2: warning: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
