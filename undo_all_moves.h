/*
Undoes all moves of white, each time executing the code and restoring the original position
org and dst must not be modified by the inner code
*/
#define undo_all_moves(code) {\
	if (a != 0) {\
		dst = a;\
		/* forward */ \
		if (4 < a) {\
			org = dst - 4;\
			if (org != b && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 0;\
				a = org;\
				code\
				if (g == 0) {\
					g = dst;\
					code\
					g = 0;\
				}\
				if (h == 0) {\
					h = dst;\
					code\
					h = 0;\
				}\
				a = dst;\
			}\
		}\
		/* forward right */ \
		if (4 < a && a % 4 != 1) {\
			org = dst - 5;\
			if (org != b && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 1;\
				a = org;\
				code\
				if (g == 0) {\
					g = dst;\
					code\
					g = 0;\
				}\
				if (h == 0) {\
					h = dst;\
					code\
					h = 0;\
				}\
				a = dst;\
			}\
		}\
		/* right */ \
		if (a % 4 != 1) {\
			org = dst - 1;\
			if (org != b && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 2;\
				a = org;\
				code\
				if (g == 0 && 4 < dst) {\
					g = dst;\
					code\
					g = 0;\
				}\
				if (h == 0 && 4 < dst) {\
					h = dst;\
					code\
					h = 0;\
				}\
				a = dst;\
			}\
		}\
		/* backward right */ \
		if (a < 17 && a % 4 != 1) {\
			org = dst + 3;\
			if (org != b && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 3;\
				a = org;\
				code\
				if (g == 0 && 4 < dst) {\
					g = dst;\
					code\
					g = 0;\
				}\
				if (h == 0 && 4 < dst) {\
					h = dst;\
					code\
					h = 0;\
				}\
				a = dst;\
			}\
		}\
		/* backward */ \
		if (a < 17) {\
			org = dst + 4;\
			if (org != b && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 4;\
				a = org;\
				code\
				if (g == 0 && 4 < dst) {\
					g = dst;\
					code\
					g = 0;\
				}\
				if (h == 0 && 4 < dst) {\
					h = dst;\
					code\
					h = 0;\
				}\
				a = dst;\
			}\
		}\
		/* backward left */ \
		if (a < 17 && a % 4 != 0) {\
			org = dst + 5;\
			if (org != b && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 5;\
				a = org;\
				code\
				if (g == 0 && 4 < dst) {\
					g = dst;\
					code\
					g = 0;\
				}\
				if (h == 0 && 4 < dst) {\
					h = dst;\
					code\
					h = 0;\
				}\
				a = dst;\
			}\
		}\
		/* left */ \
		if (a % 4 != 0) {\
			org = dst + 1;\
			if (org != b && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 6;\
				a = org;\
				code\
				if (g == 0 && 4 < dst) {\
					g = dst;\
					code\
					g = 0;\
				}\
				if (h == 0 && 4 < dst) {\
					h = dst;\
					code\
					h = 0;\
				}\
				a = dst;\
			}\
		}\
		/* forward left */ \
		if (4 < a && a % 4 != 0) {\
			org = dst - 3;\
			if (org != b && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 7;\
				a = org;\
				code\
				if (g == 0) {\
					g = dst;\
					code\
					g = 0;\
				}\
				if (h == 0) {\
					h = dst;\
					code\
					h = 0;\
				}\
				a = dst;\
			}\
		}\
	}\
	if (b != 0) {\
		dst = b;\
		/* forward */ \
		if (4 < b) {\
			org = dst - 4;\
			if (org != a && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 8;\
				b = org;\
				code\
				if (e == 0) {\
					e = dst;\
					code\
					e = 0;\
				}\
				if (h == 0) {\
					h = dst;\
					code\
					h = 0;\
				}\
				b = dst;\
			}\
		}\
		/* forward right */ \
		if (4 < b && b % 4 != 1) {\
			org = dst - 5;\
			if (org != a && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 9;\
				b = org;\
				code\
				if (e == 0) {\
					e = dst;\
					code\
					e = 0;\
				}\
				if (h == 0) {\
					h = dst;\
					code\
					h = 0;\
				}\
				b = dst;\
			}\
		}\
		/* right */ \
		if (b % 4 != 1) {\
			org = dst - 1;\
			if (org != a && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 10;\
				b = org;\
				code\
				if (e == 0 && 4 < dst) {\
					e = dst;\
					code\
					e = 0;\
				}\
				if (h == 0 && 4 < dst) {\
					h = dst;\
					code\
					h = 0;\
				}\
				b = dst;\
			}\
		}\
		/* backward right */ \
		if (b < 17 && b % 4 != 1) {\
			org = dst + 3;\
			if (org != a && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 11;\
				b = org;\
				code\
				if (e == 0 && 4 < dst) {\
					e = dst;\
					code\
					e = 0;\
				}\
				if (h == 0 && 4 < dst) {\
					h = dst;\
					code\
					h = 0;\
				}\
				b = dst;\
			}\
		}\
		/* backward */ \
		if (b < 17) {\
			org = dst + 4;\
			if (org != a && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 12;\
				b = org;\
				code\
				if (e == 0 && 4 < dst) {\
					e = dst;\
					code\
					e = 0;\
				}\
				if (h == 0 && 4 < dst) {\
					h = dst;\
					code\
					h = 0;\
				}\
				b = dst;\
			}\
		}\
		/* backward left */ \
		if (b < 17 && b % 4 != 0) {\
			org = dst + 5;\
			if (org != a && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 13;\
				b = org;\
				code\
				if (e == 0 && 4 < dst) {\
					e = dst;\
					code\
					e = 0;\
				}\
				if (h == 0 && 4 < dst) {\
					h = dst;\
					code\
					h = 0;\
				}\
				b = dst;\
			}\
		}\
		/* left */ \
		if (b % 4 != 0) {\
			org = dst + 1;\
			if (org != a && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 14;\
				b = org;\
				code\
				if (e == 0 && 4 < dst) {\
					e = dst;\
					code\
					e = 0;\
				}\
				if (h == 0 && 4 < dst) {\
					h = dst;\
					code\
					h = 0;\
				}\
				b = dst;\
			}\
		}\
		/* forward left */ \
		if (4 < b && b % 4 != 0) {\
			org = dst - 3;\
			if (org != a && org != c && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 15;\
				b = org;\
				code\
				if (e == 0) {\
					e = dst;\
					code\
					e = 0;\
				}\
				if (h == 0) {\
					h = dst;\
					code\
					h = 0;\
				}\
				b = dst;\
			}\
		}\
	}\
	if (c != 0) {\
		dst = c;\
		/* forward */ \
		if (4 < c) {\
			org = dst - 4;\
			if (org != a && org != b && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 16;\
				c = org;\
				code\
				if (f == 0) {\
					f = dst;\
					code\
					f = 0;\
				}\
				c = dst;\
			}\
		}\
		/* forward right */ \
		if (4 < c && c % 4 != 1) {\
			org = dst - 5;\
			if (org != a && org != b && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 17;\
				c = org;\
				code\
				if (f == 0) {\
					f = dst;\
					code\
					f = 0;\
				}\
				c = dst;\
			}\
		}\
		/* right */ \
		if (c % 4 != 1) {\
			org = dst - 1;\
			if (org != a && org != b && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 18;\
				c = org;\
				code\
				if (f == 0 && 4 < dst) {\
					f = dst;\
					code\
					f = 0;\
				}\
				c = dst;\
			}\
		}\
		/* backward right */ \
		if (c < 17 && c % 4 != 1) {\
			org = dst + 3;\
			if (org != a && org != b && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 19;\
				c = org;\
				code\
				if (f == 0 && 4 < dst) {\
					f = dst;\
					code\
					f = 0;\
				}\
				c = dst;\
			}\
		}\
		/* backward */ \
		if (c < 17) {\
			org = dst + 4;\
			if (org != a && org != b && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 20;\
				c = org;\
				code\
				if (f == 0 && 4 < dst) {\
					f = dst;\
					code\
					f = 0;\
				}\
				c = dst;\
			}\
		}\
		/* backward left */ \
		if (c < 17 && c % 4 != 0) {\
			org = dst + 5;\
			if (org != a && org != b && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 21;\
				c = org;\
				code\
				if (f == 0 && 4 < dst) {\
					f = dst;\
					code\
					f = 0;\
				}\
				c = dst;\
			}\
		}\
		/* left */ \
		if (c % 4 != 0) {\
			org = dst + 1;\
			if (org != a && org != b && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 22;\
				c = org;\
				code\
				if (f == 0 && 4 < dst) {\
					f = dst;\
					code\
					f = 0;\
				}\
				c = dst;\
			}\
		}\
		/* forward left */ \
		if (4 < c && c % 4 != 0) {\
			org = dst - 3;\
			if (org != a && org != b && org != d &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 23;\
				c = org;\
				code\
				if (f == 0) {\
					f = dst;\
					code\
					f = 0;\
				}\
				c = dst;\
			}\
		}\
	}\
	if (d != 0) {\
		dst = d;\
		/* forward */ \
		if (4 < d) {\
			org = dst - 4;\
			if (org != a && org != b && org != c &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 24;\
				d = org;\
				code\
				if (g == 0) {\
					g = dst;\
					code\
					g = 0;\
				}\
				d = dst;\
			}\
		}\
		/* forward right */ \
		if (4 < d && d % 4 != 1) {\
			org = dst - 5;\
			if (org != a && org != b && org != c &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 25;\
				d = org;\
				code\
				if (g == 0) {\
					g = dst;\
					code\
					g = 0;\
				}\
				d = dst;\
			}\
		}\
		/* right */ \
		if (d % 4 != 1) {\
			org = dst - 1;\
			if (org != a && org != b && org != c &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 26;\
				d = org;\
				code\
				if (g == 0 && 4 < dst) {\
					g = dst;\
					code\
					g = 0;\
				}\
				d = dst;\
			}\
		}\
		/* backward right */ \
		if (d < 17 && d % 4 != 1) {\
			org = dst + 3;\
			if (org != a && org != b && org != c &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 27;\
				d = org;\
				code\
				if (g == 0 && 4 < dst) {\
					g = dst;\
					code\
					g = 0;\
				}\
				d = dst;\
			}\
		}\
		/* backward */ \
		if (d < 17) {\
			org = dst + 4;\
			if (org != a && org != b && org != c &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 28;\
				d = org;\
				code\
				if (g == 0 && 4 < dst) {\
					g = dst;\
					code\
					g = 0;\
				}\
				d = dst;\
			}\
		}\
		/* backward left */ \
		if (d < 17 && d % 4 != 0) {\
			org = dst + 5;\
			if (org != a && org != b && org != c &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 29;\
				d = org;\
				code\
				if (g == 0 && 4 < dst) {\
					g = dst;\
					code\
					g = 0;\
				}\
				d = dst;\
			}\
		}\
		/* left */ \
		if (d % 4 != 0) {\
			org = dst + 1;\
			if (org != a && org != b && org != c &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 30;\
				d = org;\
				code\
				if (g == 0 && 4 < dst) {\
					g = dst;\
					code\
					g = 0;\
				}\
				d = dst;\
			}\
		}\
		/* forward left */ \
		if (4 < d && d % 4 != 0) {\
			org = dst - 3;\
			if (org != a && org != b && org != c &&\
				org != e && org != f && org != g && org != h) {\
				undoneMove = 31;\
				d = org;\
				code\
				if (g == 0) {\
					g = dst;\
					code\
					g = 0;\
				}\
				d = dst;\
			}\
		}\
	}\
}
