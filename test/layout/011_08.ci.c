/* Generated by re2c */

{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yycx:
		goto yyc_x;
	case yycy:
		goto yyc_y;
	}
/* *********************************** */
yyc_x:
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy3;
	}
yy3:
	++YYCURSOR;
	;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy7;
	default:	goto yy6;
	}
yy6:
	;
yy7:
	++YYCURSOR;
	goto yy6;
/* *********************************** */
yyc_y:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
	;
}
