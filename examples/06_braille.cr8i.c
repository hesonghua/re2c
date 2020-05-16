/* Generated by re2c */
#include <ctype.h>
#include <stdio.h>

template<typename char_t>
struct input_t {
    size_t len;
    char_t *str;

    input_t(FILE *f) : len(0), str(NULL)
    {
        fseek(f, 0, SEEK_END);
        len = ftell(f) / sizeof(char_t);
        fseek(f, 0, SEEK_SET);
        str = new char_t[len + 1];
        fread(str, sizeof(char_t), len, f);
        str[len] = 0;
    }
    ~input_t()
    {
        delete[]str;
    }
};

typedef input_t<unsigned char>  iutf8_t;
typedef input_t<unsigned short> iutf16_t;
typedef input_t<unsigned int>   iutf32_t;
typedef input_t<unsigned short> iucs2_t;

struct out_t {
    bool caps;

    out_t() : caps(false) {}
    void prt(char c)
    {
        printf("%c", caps ? toupper(c) : c);
        caps = false;
    }
    void err()
    {
        printf(" ... error\n");
    }
};



enum YYCONDTYPE {
	yycl,
	yycn,
};


static void lex_utf8(const iutf8_t & in)
{
    const unsigned char *YYCURSOR = in.str;
    const unsigned char *YYMARKER;
    int c = yycl;
    out_t out;
    
{
	unsigned char yych;
	switch (c) {
	case yycl:
		goto yyc_l;
	case yycn:
		goto yyc_n;
	}
/* *********************************** */
yyc_l:
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy3;
	case '\n':	goto yy7;
	case ' ':	goto yy9;
	case 0xE2:	goto yy11;
	default:	goto yy5;
	}
yy3:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy5:
	++YYCURSOR;
yy6:
	{ out.err(); return; }
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\r':	goto yy12;
	default:	goto yy8;
	}
yy8:
	{ out.prt('\n'); goto yyc_l; }
yy9:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy11:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy13;
	default:	goto yy6;
	}
yy12:
	++YYCURSOR;
	goto yy8;
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy9;
	case 0x81:	goto yy15;
	case 0x82:	goto yy17;
	case 0x83:	goto yy19;
	case 0x84:	goto yy21;
	case 0x85:	goto yy23;
	case 0x86:	goto yy25;
	case 0x87:	goto yy27;
	case 0x89:	goto yy29;
	case 0x8A:	goto yy31;
	case 0x8B:	goto yy33;
	case 0x8D:	goto yy35;
	case 0x8E:	goto yy37;
	case 0x8F:	goto yy39;
	case 0x91:	goto yy41;
	case 0x92:	goto yy43;
	case 0x93:	goto yy45;
	case 0x94:	goto yy47;
	case 0x95:	goto yy49;
	case 0x96:	goto yy51;
	case 0x97:	goto yy53;
	case 0x99:	goto yy55;
	case 0x9A:	goto yy57;
	case 0x9B:	goto yy59;
	case 0x9D:	goto yy61;
	case 0x9E:	goto yy63;
	case 0x9F:	goto yy65;
	case 0xA0:	goto yy67;
	case 0xA4:	goto yy69;
	case 0xA5:	goto yy71;
	case 0xA6:	goto yy73;
	case 0xA7:	goto yy75;
	case 0xAD:	goto yy77;
	case 0xB0:	goto yy79;
	case 0xB2:	goto yy81;
	case 0xB5:	goto yy83;
	case 0xBA:	goto yy85;
	case 0xBC:	goto yy87;
	case 0xBD:	goto yy89;
	default:	goto yy14;
	}
yy14:
	YYCURSOR = YYMARKER;
	goto yy6;
yy15:
	++YYCURSOR;
	{ out.prt('a'); goto yyc_l; }
yy17:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy19:
	++YYCURSOR;
	{ out.prt('b'); goto yyc_l; }
yy21:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy23:
	++YYCURSOR;
	{ out.prt('k'); goto yyc_l; }
yy25:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy27:
	++YYCURSOR;
	{ out.prt('l'); goto yyc_l; }
yy29:
	++YYCURSOR;
	{ out.prt('c'); goto yyc_l; }
yy31:
	++YYCURSOR;
	{ out.prt('i'); goto yyc_l; }
yy33:
	++YYCURSOR;
	{ out.prt('f'); goto yyc_l; }
yy35:
	++YYCURSOR;
	{ out.prt('m'); goto yyc_l; }
yy37:
	++YYCURSOR;
	{ out.prt('s'); goto yyc_l; }
yy39:
	++YYCURSOR;
	{ out.prt('p'); goto yyc_l; }
yy41:
	++YYCURSOR;
	{ out.prt('e'); goto yyc_l; }
yy43:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy45:
	++YYCURSOR;
	{ out.prt('h'); goto yyc_l; }
yy47:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy49:
	++YYCURSOR;
	{ out.prt('o'); goto yyc_l; }
yy51:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy53:
	++YYCURSOR;
	{ out.prt('r'); goto yyc_l; }
yy55:
	++YYCURSOR;
	{ out.prt('d'); goto yyc_l; }
yy57:
	++YYCURSOR;
	{ out.prt('j'); goto yyc_l; }
yy59:
	++YYCURSOR;
	{ out.prt('g'); goto yyc_l; }
yy61:
	++YYCURSOR;
	{ out.prt('n'); goto yyc_l; }
yy63:
	++YYCURSOR;
	{ out.prt('t'); goto yyc_l; }
yy65:
	++YYCURSOR;
	{ out.prt('q'); goto yyc_l; }
yy67:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy69:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy71:
	++YYCURSOR;
	{ out.prt('u'); goto yyc_l; }
yy73:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy75:
	++YYCURSOR;
	{ out.prt('v'); goto yyc_l; }
yy77:
	++YYCURSOR;
	{ out.prt('x'); goto yyc_l; }
yy79:
	++YYCURSOR;
	goto yyc_l;
yy81:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy83:
	++YYCURSOR;
	{ out.prt('z'); goto yyc_l; }
yy85:
	++YYCURSOR;
	{ out.prt('w'); goto yyc_l; }
yy87:
	++YYCURSOR;
	c = yycn;
	goto yyc_n;
yy89:
	++YYCURSOR;
	{ out.prt('y'); goto yyc_l; }
/* *********************************** */
yyc_n:
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy93;
	case '\n':	goto yy97;
	case ' ':	goto yy99;
	case 0xE2:	goto yy101;
	default:	goto yy95;
	}
yy93:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy95:
	++YYCURSOR;
yy96:
	{ out.err(); return; }
yy97:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\r':	goto yy102;
	default:	goto yy98;
	}
yy98:
	{ out.prt('\n'); goto yyc_l; }
yy99:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy101:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy103;
	default:	goto yy96;
	}
yy102:
	++YYCURSOR;
	goto yy98;
yy103:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy99;
	case 0x81:	goto yy105;
	case 0x82:	goto yy107;
	case 0x83:	goto yy109;
	case 0x84:	goto yy111;
	case 0x86:	goto yy113;
	case 0x89:	goto yy115;
	case 0x8A:	goto yy117;
	case 0x8B:	goto yy119;
	case 0x91:	goto yy121;
	case 0x92:	goto yy123;
	case 0x93:	goto yy125;
	case 0x94:	goto yy127;
	case 0x96:	goto yy129;
	case 0x99:	goto yy131;
	case 0x9A:	goto yy133;
	case 0x9B:	goto yy135;
	case 0xA0:	goto yy137;
	case 0xA4:	goto yy139;
	case 0xA6:	goto yy141;
	case 0xB0:	goto yy143;
	case 0xB2:	goto yy145;
	case 0xBC:	goto yy147;
	default:	goto yy104;
	}
yy104:
	YYCURSOR = YYMARKER;
	goto yy96;
yy105:
	++YYCURSOR;
	{ out.prt('1'); goto yyc_n; }
yy107:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy109:
	++YYCURSOR;
	{ out.prt('2'); goto yyc_n; }
yy111:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy113:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy115:
	++YYCURSOR;
	{ out.prt('3'); goto yyc_n; }
yy117:
	++YYCURSOR;
	{ out.prt('9'); goto yyc_n; }
yy119:
	++YYCURSOR;
	{ out.prt('6'); goto yyc_n; }
yy121:
	++YYCURSOR;
	{ out.prt('5'); goto yyc_n; }
yy123:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy125:
	++YYCURSOR;
	{ out.prt('8'); goto yyc_n; }
yy127:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy129:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy131:
	++YYCURSOR;
	{ out.prt('4'); goto yyc_n; }
yy133:
	++YYCURSOR;
	{ out.prt('0'); goto yyc_n; }
yy135:
	++YYCURSOR;
	{ out.prt('7'); goto yyc_n; }
yy137:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy139:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy141:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy143:
	++YYCURSOR;
	c = yycl;
	goto yyc_l;
yy145:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy147:
	++YYCURSOR;
	goto yyc_n;
}

}

static void lex_utf16(const iutf16_t & in)
{
    const unsigned short *YYCURSOR = in.str;
    int c = yycl;
    out_t out;
    
{
	unsigned int yych;
	if (c < 1) {
		goto yyc_l;
	} else {
		goto yyc_n;
	}
/* *********************************** */
yyc_l:
	yych = *YYCURSOR;
	if (yych <= 0x2816) {
		if (yych <= 0x2807) {
			if (yych <= 0x2800) {
				if (yych <= '\n') {
					if (yych <= 0x0000) goto yy152;
					if (yych <= '\t') goto yy154;
					goto yy156;
				} else {
					if (yych == ' ') goto yy158;
					if (yych <= 0x27FF) goto yy154;
					goto yy158;
				}
			} else {
				if (yych <= 0x2803) {
					if (yych <= 0x2801) goto yy160;
					if (yych <= 0x2802) goto yy162;
					goto yy164;
				} else {
					if (yych <= 0x2804) goto yy166;
					if (yych <= 0x2805) goto yy168;
					if (yych <= 0x2806) goto yy170;
					goto yy172;
				}
			}
		} else {
			if (yych <= 0x280E) {
				if (yych <= 0x280A) {
					if (yych <= 0x2808) goto yy154;
					if (yych <= 0x2809) goto yy174;
					goto yy176;
				} else {
					if (yych <= 0x280B) goto yy178;
					if (yych <= 0x280C) goto yy154;
					if (yych <= 0x280D) goto yy180;
					goto yy182;
				}
			} else {
				if (yych <= 0x2812) {
					if (yych <= 0x280F) goto yy184;
					if (yych <= 0x2810) goto yy154;
					if (yych <= 0x2811) goto yy186;
					goto yy188;
				} else {
					if (yych <= 0x2813) goto yy190;
					if (yych <= 0x2814) goto yy192;
					if (yych <= 0x2815) goto yy194;
					goto yy196;
				}
			}
		}
	} else {
		if (yych <= 0x2826) {
			if (yych <= 0x281D) {
				if (yych <= 0x2819) {
					if (yych <= 0x2817) goto yy198;
					if (yych <= 0x2818) goto yy154;
					goto yy200;
				} else {
					if (yych <= 0x281A) goto yy202;
					if (yych <= 0x281B) goto yy204;
					if (yych <= 0x281C) goto yy154;
					goto yy206;
				}
			} else {
				if (yych <= 0x2820) {
					if (yych <= 0x281E) goto yy208;
					if (yych <= 0x281F) goto yy210;
					goto yy212;
				} else {
					if (yych <= 0x2823) goto yy154;
					if (yych <= 0x2824) goto yy214;
					if (yych <= 0x2825) goto yy216;
					goto yy218;
				}
			}
		} else {
			if (yych <= 0x2832) {
				if (yych <= 0x282D) {
					if (yych <= 0x2827) goto yy220;
					if (yych <= 0x282C) goto yy154;
					goto yy222;
				} else {
					if (yych == 0x2830) goto yy224;
					if (yych <= 0x2831) goto yy154;
					goto yy226;
				}
			} else {
				if (yych <= 0x283A) {
					if (yych == 0x2835) goto yy228;
					if (yych <= 0x2839) goto yy154;
					goto yy230;
				} else {
					if (yych <= 0x283B) goto yy154;
					if (yych <= 0x283C) goto yy232;
					if (yych <= 0x283D) goto yy234;
					goto yy154;
				}
			}
		}
	}
yy152:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy154:
	++YYCURSOR;
	{ out.err(); return; }
yy156:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy236;
yy157:
	{ out.prt('\n'); goto yyc_l; }
yy158:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy160:
	++YYCURSOR;
	{ out.prt('a'); goto yyc_l; }
yy162:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy164:
	++YYCURSOR;
	{ out.prt('b'); goto yyc_l; }
yy166:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy168:
	++YYCURSOR;
	{ out.prt('k'); goto yyc_l; }
yy170:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy172:
	++YYCURSOR;
	{ out.prt('l'); goto yyc_l; }
yy174:
	++YYCURSOR;
	{ out.prt('c'); goto yyc_l; }
yy176:
	++YYCURSOR;
	{ out.prt('i'); goto yyc_l; }
yy178:
	++YYCURSOR;
	{ out.prt('f'); goto yyc_l; }
yy180:
	++YYCURSOR;
	{ out.prt('m'); goto yyc_l; }
yy182:
	++YYCURSOR;
	{ out.prt('s'); goto yyc_l; }
yy184:
	++YYCURSOR;
	{ out.prt('p'); goto yyc_l; }
yy186:
	++YYCURSOR;
	{ out.prt('e'); goto yyc_l; }
yy188:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy190:
	++YYCURSOR;
	{ out.prt('h'); goto yyc_l; }
yy192:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy194:
	++YYCURSOR;
	{ out.prt('o'); goto yyc_l; }
yy196:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy198:
	++YYCURSOR;
	{ out.prt('r'); goto yyc_l; }
yy200:
	++YYCURSOR;
	{ out.prt('d'); goto yyc_l; }
yy202:
	++YYCURSOR;
	{ out.prt('j'); goto yyc_l; }
yy204:
	++YYCURSOR;
	{ out.prt('g'); goto yyc_l; }
yy206:
	++YYCURSOR;
	{ out.prt('n'); goto yyc_l; }
yy208:
	++YYCURSOR;
	{ out.prt('t'); goto yyc_l; }
yy210:
	++YYCURSOR;
	{ out.prt('q'); goto yyc_l; }
yy212:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy214:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy216:
	++YYCURSOR;
	{ out.prt('u'); goto yyc_l; }
yy218:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy220:
	++YYCURSOR;
	{ out.prt('v'); goto yyc_l; }
yy222:
	++YYCURSOR;
	{ out.prt('x'); goto yyc_l; }
yy224:
	++YYCURSOR;
	goto yyc_l;
yy226:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy228:
	++YYCURSOR;
	{ out.prt('z'); goto yyc_l; }
yy230:
	++YYCURSOR;
	{ out.prt('w'); goto yyc_l; }
yy232:
	++YYCURSOR;
	c = yycn;
	goto yyc_n;
yy234:
	++YYCURSOR;
	{ out.prt('y'); goto yyc_l; }
yy236:
	++YYCURSOR;
	goto yy157;
/* *********************************** */
yyc_n:
	yych = *YYCURSOR;
	if (yych <= 0x2812) {
		if (yych <= 0x2803) {
			if (yych <= ' ') {
				if (yych <= '\t') {
					if (yych >= 0x0001) goto yy241;
				} else {
					if (yych <= '\n') goto yy243;
					if (yych <= 0x001F) goto yy241;
					goto yy245;
				}
			} else {
				if (yych <= 0x2800) {
					if (yych <= 0x27FF) goto yy241;
					goto yy245;
				} else {
					if (yych <= 0x2801) goto yy247;
					if (yych <= 0x2802) goto yy249;
					goto yy251;
				}
			}
		} else {
			if (yych <= 0x2809) {
				if (yych <= 0x2805) {
					if (yych <= 0x2804) goto yy253;
					goto yy241;
				} else {
					if (yych <= 0x2806) goto yy255;
					if (yych <= 0x2808) goto yy241;
					goto yy257;
				}
			} else {
				if (yych <= 0x280B) {
					if (yych <= 0x280A) goto yy259;
					goto yy261;
				} else {
					if (yych <= 0x2810) goto yy241;
					if (yych <= 0x2811) goto yy263;
					goto yy265;
				}
			}
		}
	} else {
		if (yych <= 0x2820) {
			if (yych <= 0x2818) {
				if (yych <= 0x2814) {
					if (yych <= 0x2813) goto yy267;
					goto yy269;
				} else {
					if (yych == 0x2816) goto yy271;
					goto yy241;
				}
			} else {
				if (yych <= 0x281A) {
					if (yych <= 0x2819) goto yy273;
					goto yy275;
				} else {
					if (yych <= 0x281B) goto yy277;
					if (yych <= 0x281F) goto yy241;
					goto yy279;
				}
			}
		} else {
			if (yych <= 0x282F) {
				if (yych <= 0x2824) {
					if (yych <= 0x2823) goto yy241;
					goto yy281;
				} else {
					if (yych == 0x2826) goto yy283;
					goto yy241;
				}
			} else {
				if (yych <= 0x2832) {
					if (yych <= 0x2830) goto yy285;
					if (yych <= 0x2831) goto yy241;
					goto yy287;
				} else {
					if (yych == 0x283C) goto yy289;
					goto yy241;
				}
			}
		}
	}
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy241:
	++YYCURSOR;
	{ out.err(); return; }
yy243:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy291;
yy244:
	{ out.prt('\n'); goto yyc_l; }
yy245:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy247:
	++YYCURSOR;
	{ out.prt('1'); goto yyc_n; }
yy249:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy251:
	++YYCURSOR;
	{ out.prt('2'); goto yyc_n; }
yy253:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy255:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy257:
	++YYCURSOR;
	{ out.prt('3'); goto yyc_n; }
yy259:
	++YYCURSOR;
	{ out.prt('9'); goto yyc_n; }
yy261:
	++YYCURSOR;
	{ out.prt('6'); goto yyc_n; }
yy263:
	++YYCURSOR;
	{ out.prt('5'); goto yyc_n; }
yy265:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy267:
	++YYCURSOR;
	{ out.prt('8'); goto yyc_n; }
yy269:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy271:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy273:
	++YYCURSOR;
	{ out.prt('4'); goto yyc_n; }
yy275:
	++YYCURSOR;
	{ out.prt('0'); goto yyc_n; }
yy277:
	++YYCURSOR;
	{ out.prt('7'); goto yyc_n; }
yy279:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy281:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy283:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy285:
	++YYCURSOR;
	c = yycl;
	goto yyc_l;
yy287:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy289:
	++YYCURSOR;
	goto yyc_n;
yy291:
	++YYCURSOR;
	goto yy244;
}

}

static void lex_utf32(const iutf32_t & in)
{
    const unsigned int *YYCURSOR = in.str;
    int c = yycl;
    out_t out;
    
{
	unsigned int yych;
	if (c < 1) {
		goto yyc_l;
	} else {
		goto yyc_n;
	}
/* *********************************** */
yyc_l:
	yych = *YYCURSOR;
	if (yych <= 0x00002816) {
		if (yych <= 0x00002807) {
			if (yych <= 0x00002800) {
				if (yych <= '\n') {
					if (yych <= 0x00000000) goto yy295;
					if (yych <= '\t') goto yy297;
					goto yy299;
				} else {
					if (yych == ' ') goto yy301;
					if (yych <= 0x000027FF) goto yy297;
					goto yy301;
				}
			} else {
				if (yych <= 0x00002803) {
					if (yych <= 0x00002801) goto yy303;
					if (yych <= 0x00002802) goto yy305;
					goto yy307;
				} else {
					if (yych <= 0x00002804) goto yy309;
					if (yych <= 0x00002805) goto yy311;
					if (yych <= 0x00002806) goto yy313;
					goto yy315;
				}
			}
		} else {
			if (yych <= 0x0000280E) {
				if (yych <= 0x0000280A) {
					if (yych <= 0x00002808) goto yy297;
					if (yych <= 0x00002809) goto yy317;
					goto yy319;
				} else {
					if (yych <= 0x0000280B) goto yy321;
					if (yych <= 0x0000280C) goto yy297;
					if (yych <= 0x0000280D) goto yy323;
					goto yy325;
				}
			} else {
				if (yych <= 0x00002812) {
					if (yych <= 0x0000280F) goto yy327;
					if (yych <= 0x00002810) goto yy297;
					if (yych <= 0x00002811) goto yy329;
					goto yy331;
				} else {
					if (yych <= 0x00002813) goto yy333;
					if (yych <= 0x00002814) goto yy335;
					if (yych <= 0x00002815) goto yy337;
					goto yy339;
				}
			}
		}
	} else {
		if (yych <= 0x00002826) {
			if (yych <= 0x0000281D) {
				if (yych <= 0x00002819) {
					if (yych <= 0x00002817) goto yy341;
					if (yych <= 0x00002818) goto yy297;
					goto yy343;
				} else {
					if (yych <= 0x0000281A) goto yy345;
					if (yych <= 0x0000281B) goto yy347;
					if (yych <= 0x0000281C) goto yy297;
					goto yy349;
				}
			} else {
				if (yych <= 0x00002820) {
					if (yych <= 0x0000281E) goto yy351;
					if (yych <= 0x0000281F) goto yy353;
					goto yy355;
				} else {
					if (yych <= 0x00002823) goto yy297;
					if (yych <= 0x00002824) goto yy357;
					if (yych <= 0x00002825) goto yy359;
					goto yy361;
				}
			}
		} else {
			if (yych <= 0x00002832) {
				if (yych <= 0x0000282D) {
					if (yych <= 0x00002827) goto yy363;
					if (yych <= 0x0000282C) goto yy297;
					goto yy365;
				} else {
					if (yych == 0x00002830) goto yy367;
					if (yych <= 0x00002831) goto yy297;
					goto yy369;
				}
			} else {
				if (yych <= 0x0000283A) {
					if (yych == 0x00002835) goto yy371;
					if (yych <= 0x00002839) goto yy297;
					goto yy373;
				} else {
					if (yych <= 0x0000283B) goto yy297;
					if (yych <= 0x0000283C) goto yy375;
					if (yych <= 0x0000283D) goto yy377;
					goto yy297;
				}
			}
		}
	}
yy295:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy297:
	++YYCURSOR;
	{ out.err(); return; }
yy299:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy379;
yy300:
	{ out.prt('\n'); goto yyc_l; }
yy301:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy303:
	++YYCURSOR;
	{ out.prt('a'); goto yyc_l; }
yy305:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy307:
	++YYCURSOR;
	{ out.prt('b'); goto yyc_l; }
yy309:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy311:
	++YYCURSOR;
	{ out.prt('k'); goto yyc_l; }
yy313:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy315:
	++YYCURSOR;
	{ out.prt('l'); goto yyc_l; }
yy317:
	++YYCURSOR;
	{ out.prt('c'); goto yyc_l; }
yy319:
	++YYCURSOR;
	{ out.prt('i'); goto yyc_l; }
yy321:
	++YYCURSOR;
	{ out.prt('f'); goto yyc_l; }
yy323:
	++YYCURSOR;
	{ out.prt('m'); goto yyc_l; }
yy325:
	++YYCURSOR;
	{ out.prt('s'); goto yyc_l; }
yy327:
	++YYCURSOR;
	{ out.prt('p'); goto yyc_l; }
yy329:
	++YYCURSOR;
	{ out.prt('e'); goto yyc_l; }
yy331:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy333:
	++YYCURSOR;
	{ out.prt('h'); goto yyc_l; }
yy335:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy337:
	++YYCURSOR;
	{ out.prt('o'); goto yyc_l; }
yy339:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy341:
	++YYCURSOR;
	{ out.prt('r'); goto yyc_l; }
yy343:
	++YYCURSOR;
	{ out.prt('d'); goto yyc_l; }
yy345:
	++YYCURSOR;
	{ out.prt('j'); goto yyc_l; }
yy347:
	++YYCURSOR;
	{ out.prt('g'); goto yyc_l; }
yy349:
	++YYCURSOR;
	{ out.prt('n'); goto yyc_l; }
yy351:
	++YYCURSOR;
	{ out.prt('t'); goto yyc_l; }
yy353:
	++YYCURSOR;
	{ out.prt('q'); goto yyc_l; }
yy355:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy357:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy359:
	++YYCURSOR;
	{ out.prt('u'); goto yyc_l; }
yy361:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy363:
	++YYCURSOR;
	{ out.prt('v'); goto yyc_l; }
yy365:
	++YYCURSOR;
	{ out.prt('x'); goto yyc_l; }
yy367:
	++YYCURSOR;
	goto yyc_l;
yy369:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy371:
	++YYCURSOR;
	{ out.prt('z'); goto yyc_l; }
yy373:
	++YYCURSOR;
	{ out.prt('w'); goto yyc_l; }
yy375:
	++YYCURSOR;
	c = yycn;
	goto yyc_n;
yy377:
	++YYCURSOR;
	{ out.prt('y'); goto yyc_l; }
yy379:
	++YYCURSOR;
	goto yy300;
/* *********************************** */
yyc_n:
	yych = *YYCURSOR;
	if (yych <= 0x00002812) {
		if (yych <= 0x00002803) {
			if (yych <= ' ') {
				if (yych <= '\t') {
					if (yych >= 0x00000001) goto yy384;
				} else {
					if (yych <= '\n') goto yy386;
					if (yych <= 0x0000001F) goto yy384;
					goto yy388;
				}
			} else {
				if (yych <= 0x00002800) {
					if (yych <= 0x000027FF) goto yy384;
					goto yy388;
				} else {
					if (yych <= 0x00002801) goto yy390;
					if (yych <= 0x00002802) goto yy392;
					goto yy394;
				}
			}
		} else {
			if (yych <= 0x00002809) {
				if (yych <= 0x00002805) {
					if (yych <= 0x00002804) goto yy396;
					goto yy384;
				} else {
					if (yych <= 0x00002806) goto yy398;
					if (yych <= 0x00002808) goto yy384;
					goto yy400;
				}
			} else {
				if (yych <= 0x0000280B) {
					if (yych <= 0x0000280A) goto yy402;
					goto yy404;
				} else {
					if (yych <= 0x00002810) goto yy384;
					if (yych <= 0x00002811) goto yy406;
					goto yy408;
				}
			}
		}
	} else {
		if (yych <= 0x00002820) {
			if (yych <= 0x00002818) {
				if (yych <= 0x00002814) {
					if (yych <= 0x00002813) goto yy410;
					goto yy412;
				} else {
					if (yych == 0x00002816) goto yy414;
					goto yy384;
				}
			} else {
				if (yych <= 0x0000281A) {
					if (yych <= 0x00002819) goto yy416;
					goto yy418;
				} else {
					if (yych <= 0x0000281B) goto yy420;
					if (yych <= 0x0000281F) goto yy384;
					goto yy422;
				}
			}
		} else {
			if (yych <= 0x0000282F) {
				if (yych <= 0x00002824) {
					if (yych <= 0x00002823) goto yy384;
					goto yy424;
				} else {
					if (yych == 0x00002826) goto yy426;
					goto yy384;
				}
			} else {
				if (yych <= 0x00002832) {
					if (yych <= 0x00002830) goto yy428;
					if (yych <= 0x00002831) goto yy384;
					goto yy430;
				} else {
					if (yych == 0x0000283C) goto yy432;
					goto yy384;
				}
			}
		}
	}
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy384:
	++YYCURSOR;
	{ out.err(); return; }
yy386:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy434;
yy387:
	{ out.prt('\n'); goto yyc_l; }
yy388:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy390:
	++YYCURSOR;
	{ out.prt('1'); goto yyc_n; }
yy392:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy394:
	++YYCURSOR;
	{ out.prt('2'); goto yyc_n; }
yy396:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy398:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy400:
	++YYCURSOR;
	{ out.prt('3'); goto yyc_n; }
yy402:
	++YYCURSOR;
	{ out.prt('9'); goto yyc_n; }
yy404:
	++YYCURSOR;
	{ out.prt('6'); goto yyc_n; }
yy406:
	++YYCURSOR;
	{ out.prt('5'); goto yyc_n; }
yy408:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy410:
	++YYCURSOR;
	{ out.prt('8'); goto yyc_n; }
yy412:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy414:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy416:
	++YYCURSOR;
	{ out.prt('4'); goto yyc_n; }
yy418:
	++YYCURSOR;
	{ out.prt('0'); goto yyc_n; }
yy420:
	++YYCURSOR;
	{ out.prt('7'); goto yyc_n; }
yy422:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy424:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy426:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy428:
	++YYCURSOR;
	c = yycl;
	goto yyc_l;
yy430:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy432:
	++YYCURSOR;
	goto yyc_n;
yy434:
	++YYCURSOR;
	goto yy387;
}

}

static void lex_ucs2(const iucs2_t & in)
{
    const unsigned short *YYCURSOR = in.str;
    int c = yycl;
    out_t out;
    
{
	unsigned int yych;
	if (c < 1) {
		goto yyc_l;
	} else {
		goto yyc_n;
	}
/* *********************************** */
yyc_l:
	yych = *YYCURSOR;
	if (yych <= 0x2816) {
		if (yych <= 0x2807) {
			if (yych <= 0x2800) {
				if (yych <= '\n') {
					if (yych <= 0x0000) goto yy438;
					if (yych <= '\t') goto yy440;
					goto yy442;
				} else {
					if (yych == ' ') goto yy444;
					if (yych <= 0x27FF) goto yy440;
					goto yy444;
				}
			} else {
				if (yych <= 0x2803) {
					if (yych <= 0x2801) goto yy446;
					if (yych <= 0x2802) goto yy448;
					goto yy450;
				} else {
					if (yych <= 0x2804) goto yy452;
					if (yych <= 0x2805) goto yy454;
					if (yych <= 0x2806) goto yy456;
					goto yy458;
				}
			}
		} else {
			if (yych <= 0x280E) {
				if (yych <= 0x280A) {
					if (yych <= 0x2808) goto yy440;
					if (yych <= 0x2809) goto yy460;
					goto yy462;
				} else {
					if (yych <= 0x280B) goto yy464;
					if (yych <= 0x280C) goto yy440;
					if (yych <= 0x280D) goto yy466;
					goto yy468;
				}
			} else {
				if (yych <= 0x2812) {
					if (yych <= 0x280F) goto yy470;
					if (yych <= 0x2810) goto yy440;
					if (yych <= 0x2811) goto yy472;
					goto yy474;
				} else {
					if (yych <= 0x2813) goto yy476;
					if (yych <= 0x2814) goto yy478;
					if (yych <= 0x2815) goto yy480;
					goto yy482;
				}
			}
		}
	} else {
		if (yych <= 0x2826) {
			if (yych <= 0x281D) {
				if (yych <= 0x2819) {
					if (yych <= 0x2817) goto yy484;
					if (yych <= 0x2818) goto yy440;
					goto yy486;
				} else {
					if (yych <= 0x281A) goto yy488;
					if (yych <= 0x281B) goto yy490;
					if (yych <= 0x281C) goto yy440;
					goto yy492;
				}
			} else {
				if (yych <= 0x2820) {
					if (yych <= 0x281E) goto yy494;
					if (yych <= 0x281F) goto yy496;
					goto yy498;
				} else {
					if (yych <= 0x2823) goto yy440;
					if (yych <= 0x2824) goto yy500;
					if (yych <= 0x2825) goto yy502;
					goto yy504;
				}
			}
		} else {
			if (yych <= 0x2832) {
				if (yych <= 0x282D) {
					if (yych <= 0x2827) goto yy506;
					if (yych <= 0x282C) goto yy440;
					goto yy508;
				} else {
					if (yych == 0x2830) goto yy510;
					if (yych <= 0x2831) goto yy440;
					goto yy512;
				}
			} else {
				if (yych <= 0x283A) {
					if (yych == 0x2835) goto yy514;
					if (yych <= 0x2839) goto yy440;
					goto yy516;
				} else {
					if (yych <= 0x283B) goto yy440;
					if (yych <= 0x283C) goto yy518;
					if (yych <= 0x283D) goto yy520;
					goto yy440;
				}
			}
		}
	}
yy438:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy440:
	++YYCURSOR;
	{ out.err(); return; }
yy442:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy522;
yy443:
	{ out.prt('\n'); goto yyc_l; }
yy444:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy446:
	++YYCURSOR;
	{ out.prt('a'); goto yyc_l; }
yy448:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy450:
	++YYCURSOR;
	{ out.prt('b'); goto yyc_l; }
yy452:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy454:
	++YYCURSOR;
	{ out.prt('k'); goto yyc_l; }
yy456:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy458:
	++YYCURSOR;
	{ out.prt('l'); goto yyc_l; }
yy460:
	++YYCURSOR;
	{ out.prt('c'); goto yyc_l; }
yy462:
	++YYCURSOR;
	{ out.prt('i'); goto yyc_l; }
yy464:
	++YYCURSOR;
	{ out.prt('f'); goto yyc_l; }
yy466:
	++YYCURSOR;
	{ out.prt('m'); goto yyc_l; }
yy468:
	++YYCURSOR;
	{ out.prt('s'); goto yyc_l; }
yy470:
	++YYCURSOR;
	{ out.prt('p'); goto yyc_l; }
yy472:
	++YYCURSOR;
	{ out.prt('e'); goto yyc_l; }
yy474:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy476:
	++YYCURSOR;
	{ out.prt('h'); goto yyc_l; }
yy478:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy480:
	++YYCURSOR;
	{ out.prt('o'); goto yyc_l; }
yy482:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy484:
	++YYCURSOR;
	{ out.prt('r'); goto yyc_l; }
yy486:
	++YYCURSOR;
	{ out.prt('d'); goto yyc_l; }
yy488:
	++YYCURSOR;
	{ out.prt('j'); goto yyc_l; }
yy490:
	++YYCURSOR;
	{ out.prt('g'); goto yyc_l; }
yy492:
	++YYCURSOR;
	{ out.prt('n'); goto yyc_l; }
yy494:
	++YYCURSOR;
	{ out.prt('t'); goto yyc_l; }
yy496:
	++YYCURSOR;
	{ out.prt('q'); goto yyc_l; }
yy498:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy500:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy502:
	++YYCURSOR;
	{ out.prt('u'); goto yyc_l; }
yy504:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy506:
	++YYCURSOR;
	{ out.prt('v'); goto yyc_l; }
yy508:
	++YYCURSOR;
	{ out.prt('x'); goto yyc_l; }
yy510:
	++YYCURSOR;
	goto yyc_l;
yy512:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy514:
	++YYCURSOR;
	{ out.prt('z'); goto yyc_l; }
yy516:
	++YYCURSOR;
	{ out.prt('w'); goto yyc_l; }
yy518:
	++YYCURSOR;
	c = yycn;
	goto yyc_n;
yy520:
	++YYCURSOR;
	{ out.prt('y'); goto yyc_l; }
yy522:
	++YYCURSOR;
	goto yy443;
/* *********************************** */
yyc_n:
	yych = *YYCURSOR;
	if (yych <= 0x2812) {
		if (yych <= 0x2803) {
			if (yych <= ' ') {
				if (yych <= '\t') {
					if (yych >= 0x0001) goto yy527;
				} else {
					if (yych <= '\n') goto yy529;
					if (yych <= 0x001F) goto yy527;
					goto yy531;
				}
			} else {
				if (yych <= 0x2800) {
					if (yych <= 0x27FF) goto yy527;
					goto yy531;
				} else {
					if (yych <= 0x2801) goto yy533;
					if (yych <= 0x2802) goto yy535;
					goto yy537;
				}
			}
		} else {
			if (yych <= 0x2809) {
				if (yych <= 0x2805) {
					if (yych <= 0x2804) goto yy539;
					goto yy527;
				} else {
					if (yych <= 0x2806) goto yy541;
					if (yych <= 0x2808) goto yy527;
					goto yy543;
				}
			} else {
				if (yych <= 0x280B) {
					if (yych <= 0x280A) goto yy545;
					goto yy547;
				} else {
					if (yych <= 0x2810) goto yy527;
					if (yych <= 0x2811) goto yy549;
					goto yy551;
				}
			}
		}
	} else {
		if (yych <= 0x2820) {
			if (yych <= 0x2818) {
				if (yych <= 0x2814) {
					if (yych <= 0x2813) goto yy553;
					goto yy555;
				} else {
					if (yych == 0x2816) goto yy557;
					goto yy527;
				}
			} else {
				if (yych <= 0x281A) {
					if (yych <= 0x2819) goto yy559;
					goto yy561;
				} else {
					if (yych <= 0x281B) goto yy563;
					if (yych <= 0x281F) goto yy527;
					goto yy565;
				}
			}
		} else {
			if (yych <= 0x282F) {
				if (yych <= 0x2824) {
					if (yych <= 0x2823) goto yy527;
					goto yy567;
				} else {
					if (yych == 0x2826) goto yy569;
					goto yy527;
				}
			} else {
				if (yych <= 0x2832) {
					if (yych <= 0x2830) goto yy571;
					if (yych <= 0x2831) goto yy527;
					goto yy573;
				} else {
					if (yych == 0x283C) goto yy575;
					goto yy527;
				}
			}
		}
	}
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy527:
	++YYCURSOR;
	{ out.err(); return; }
yy529:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy577;
yy530:
	{ out.prt('\n'); goto yyc_l; }
yy531:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy533:
	++YYCURSOR;
	{ out.prt('1'); goto yyc_n; }
yy535:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy537:
	++YYCURSOR;
	{ out.prt('2'); goto yyc_n; }
yy539:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy541:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy543:
	++YYCURSOR;
	{ out.prt('3'); goto yyc_n; }
yy545:
	++YYCURSOR;
	{ out.prt('9'); goto yyc_n; }
yy547:
	++YYCURSOR;
	{ out.prt('6'); goto yyc_n; }
yy549:
	++YYCURSOR;
	{ out.prt('5'); goto yyc_n; }
yy551:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy553:
	++YYCURSOR;
	{ out.prt('8'); goto yyc_n; }
yy555:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy557:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy559:
	++YYCURSOR;
	{ out.prt('4'); goto yyc_n; }
yy561:
	++YYCURSOR;
	{ out.prt('0'); goto yyc_n; }
yy563:
	++YYCURSOR;
	{ out.prt('7'); goto yyc_n; }
yy565:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy567:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy569:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy571:
	++YYCURSOR;
	c = yycl;
	goto yyc_l;
yy573:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy575:
	++YYCURSOR;
	goto yyc_n;
yy577:
	++YYCURSOR;
	goto yy530;
}

}

int main()
{
    FILE *f;

    f = fopen("06_braille.utf8.txt", "rb");
    if (f) {
        printf("utf8:\n");
        iutf8_t in(f);
        lex_utf8(in);
        fclose(f);
    }

    f = fopen("06_braille.utf16.txt", "rb");
    if (f) {
        printf("utf16:\n");
        iutf16_t in(f);
        lex_utf16(in);
        fclose(f);
    }

    f = fopen("06_braille.utf32.txt", "rb");
    if (f) {
        printf("utf32:\n");
        iutf32_t in(f);
        lex_utf32(in);
        fclose(f);
    }

    f = fopen("06_braille.ucs2.txt", "rb");
    if (f) {
        printf("ucs2:\n");
        iucs2_t in(f);
        lex_ucs2(in);
        fclose(f);
    }

    return 0;
}
