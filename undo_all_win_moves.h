/*
Undoes all win-moves of white, each time executing the code and restoring the original position
org and dst must not be modified by the inner code
*/
#define undo_all_win_moves(code) {\
	/* a REACHED THE LAST ROW */ \
	if (20 < a && a < 25) {\
		/* forward */ \
		dst = a;\
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
		/* forward right */ \
		if (dst != 21) {\
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
		/* forward left */ \
		if (dst != 24) {\
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
	/* b REACHED THE LAST ROW */ \
	else if (20 < b && b < 25) {\
		/* forward */ \
		dst = b;\
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
		/* forward right */ \
		if (dst != 21) {\
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
		/* forward left */ \
		if (dst != 24) {\
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
	/* c REACHED THE LAST ROW */ \
	else if (20 < c && c < 25) {\
		/* forward */ \
		dst = c;\
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
		/* forward right */ \
		if (dst != 21) {\
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
		/* forward left */ \
		if (dst != 24) {\
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
	/* d REACHED THE LAST ROW */ \
	else if (20 < d && d < 25) {\
		/* forward */ \
		dst = d;\
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
		/* forward right */ \
		if (dst != 21) {\
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
		/* forward left */ \
		if (dst != 24) {\
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
	/* ALL BLACK PIECES ARE DEAD, LAST ROW NOT REACHED */ \
	else if (e == 0 && f == 0 && g == 0 && h == 0) {\
		/* UNDO ALL 8 MOVES FOR a */ \
		if (4 < a) {\
			/* forward */ \
			if (4 < a) {\
				dst = a;\
				org = dst - 4;\
				undoneMove = 0;\
				if (b != org && c != org && d != org) {\
					a = org;\
					g = dst;\
					code\
					g = 0;\
					h = dst;\
					code\
					h = 0;\
					a = dst;\
				}\
			}\
			/* forward right */ \
			if (4 < a && a % 4 != 1) {\
				dst = a;\
				org = dst - 5;\
				undoneMove = 1;\
				if (b != org && c != org && d != org) {\
					a = org;\
					g = dst;\
					code\
					g = 0;\
					h = dst;\
					code\
					h = 0;\
					a = dst;\
				}\
			}\
			/* right */ \
			if (a % 4 != 1) {\
				dst = a;\
				org = dst - 1;\
				undoneMove = 2;\
				if (b != org && c != org && d != org) {\
					a = org;\
					g = dst;\
					code\
					g = 0;\
					h = dst;\
					code\
					h = 0;\
					a = dst;\
				}\
			}\
			/* backward right */ \
			if (a < 17 && a % 4 != 1) {\
				dst = a;\
				org = dst + 3;\
				undoneMove = 3;\
				if (b != org && c != org && d != org) {\
					a = org;\
					g = dst;\
					code\
					g = 0;\
					h = dst;\
					code\
					h = 0;\
					a = dst;\
				}\
			}\
			/* backward */ \
			if (a < 17) {\
				dst = a;\
				org = dst + 4;\
				undoneMove = 4;\
				if (b != org && c != org && d != org) {\
					a = org;\
					g = dst;\
					code\
					g = 0;\
					h = dst;\
					code\
					h = 0;\
					a = dst;\
				}\
			}\
			/* backward left */ \
			if (a < 17 && a % 4 != 0) {\
				dst = a;\
				org = dst + 5;\
				undoneMove = 5;\
				if (b != org && c != org && d != org) {\
					a = org;\
					g = dst;\
					code\
					g = 0;\
					h = dst;\
					code\
					h = 0;\
					a = dst;\
				}\
			}\
			/* left */ \
			if (a % 4 != 0) {\
				dst = a;\
				org = dst + 1;\
				undoneMove = 6;\
				if (b != org && c != org && d != org) {\
					a = org;\
					g = dst;\
					code\
					g = 0;\
					h = dst;\
					code\
					h = 0;\
					a = dst;\
				}\
			}\
			/* forward left */ \
			if (4 < a && a % 4 != 0) {\
				dst = a;\
				org = dst - 3;\
				undoneMove = 7;\
				if (b != org && c != org && d != org) {\
					a = org;\
					g = dst;\
					code\
					g = 0;\
					h = dst;\
					code\
					h = 0;\
					a = dst;\
				}\
			}\
		}\
		/* UNDO ALL 8 MOVES FOR b */ \
		if (4 < b) {\
			/* forward */ \
			if (4 < b) {\
				dst = b;\
				org = dst - 4;\
				undoneMove = 8;\
				if (a != org && c != org && d != org) {\
					b = org;\
					e = dst;\
					code\
					e = 0;\
					h = dst;\
					code\
					h = 0;\
					b = dst;\
				}\
			}\
			/* forward right */ \
			if (4 < b && b % 4 != 1) {\
				dst = b;\
				org = dst - 5;\
				undoneMove = 9;\
				if (a != org && c != org && d != org) {\
					b = org;\
					e = dst;\
					code\
					e = 0;\
					h = dst;\
					code\
					h = 0;\
					b = dst;\
				}\
			}\
			/* right */ \
			if (b % 4 != 1) {\
				dst = b;\
				org = dst - 1;\
				undoneMove = 10;\
				if (a != org && c != org && d != org) {\
					b = org;\
					e = dst;\
					code\
					e = 0;\
					h = dst;\
					code\
					h = 0;\
					b = dst;\
				}\
			}\
			/* backward right */ \
			if (b < 17 && b % 4 != 1) {\
				dst = b;\
				org = dst + 3;\
				undoneMove = 11;\
				if (a != org && c != org && d != org) {\
					b = org;\
					e = dst;\
					code\
					e = 0;\
					h = dst;\
					code\
					h = 0;\
					b = dst;\
				}\
			}\
			/* backward */ \
			if (b < 17) {\
				dst = b;\
				org = dst + 4;\
				undoneMove = 12;\
				if (a != org && c != org && d != org) {\
					b = org;\
					e = dst;\
					code\
					e = 0;\
					h = dst;\
					code\
					h = 0;\
					b = dst;\
				}\
			}\
			/* backward left */ \
			if (b < 17 && b % 4 != 0) {\
				dst = b;\
				org = dst + 5;\
				undoneMove = 13;\
				if (a != org && c != org && d != org) {\
					b = org;\
					e = dst;\
					code\
					e = 0;\
					h = dst;\
					code\
					h = 0;\
					b = dst;\
				}\
			}\
			/* left */ \
			if (b % 4 != 0) {\
				dst = b;\
				org = dst + 1;\
				undoneMove = 14;\
				if (a != org && c != org && d != org) {\
					b = org;\
					e = dst;\
					code\
					e = 0;\
					h = dst;\
					code\
					h = 0;\
					b = dst;\
				}\
			}\
			/* forward left */ \
			if (4 < b && b % 4 != 0) {\
				dst = b;\
				org = dst - 3;\
				undoneMove = 15;\
				if (a != org && c != org && d != org) {\
					b = org;\
					e = dst;\
					code\
					e = 0;\
					h = dst;\
					code\
					h = 0;\
					b = dst;\
				}\
			}\
		}\
		/* UNDO ALL 8 MOVES FOR c */ \
		if (4 < c) {\
			/* forward */ \
			if (4 < c) {\
				dst = c;\
				org = dst - 4;\
				undoneMove = 16;\
				if (a != org && b != org && d != org) {\
					c = org;\
					f = dst;\
					code\
					f = 0;\
					c = dst;\
				}\
			}\
			/* forward right */ \
			if (4 < c && c % 4 != 1) {\
				dst = c;\
				org = dst - 5;\
				undoneMove = 17;\
				if (a != org && b != org && d != org) {\
					c = org;\
					f = dst;\
					code\
					f = 0;\
					c = dst;\
				}\
			}\
			/* right */ \
			if (c % 4 != 1) {\
				dst = c;\
				org = dst - 1;\
				undoneMove = 18;\
				if (a != org && b != org && d != org) {\
					c = org;\
					f = dst;\
					code\
					f = 0;\
					c = dst;\
				}\
			}\
			/* backward right */ \
			if (c < 17 && c % 4 != 1) {\
				dst = c;\
				org = dst + 3;\
				undoneMove = 19;\
				if (a != org && b != org && d != org) {\
					c = org;\
					f = dst;\
					code\
					f = 0;\
					c = dst;\
				}\
			}\
			/* backward */ \
			if (c < 17) {\
				dst = c;\
				org = dst + 4;\
				undoneMove = 20;\
				if (a != org && b != org && d != org) {\
					c = org;\
					f = dst;\
					code\
					f = 0;\
					c = dst;\
				}\
			}\
			/* backward left */ \
			if (c < 17 && c % 4 != 0) {\
				dst = c;\
				org = dst + 5;\
				undoneMove = 21;\
				if (a != org && b != org && d != org) {\
					c = org;\
					f = dst;\
					code\
					f = 0;\
					c = dst;\
				}\
			}\
			/* left */ \
			if (c % 4 != 0) {\
				dst = c;\
				org = dst + 1;\
				undoneMove = 22;\
				if (a != org && b != org && d != org) {\
					c = org;\
					f = dst;\
					code\
					f = 0;\
					c = dst;\
				}\
			}\
			/* forward left */ \
			if (4 < c && c % 4 != 0) {\
				dst = c;\
				org = dst - 3;\
				undoneMove = 23;\
				if (a != org && b != org && d != org) {\
					c = org;\
					f = dst;\
					code\
					f = 0;\
					c = dst;\
				}\
			}\
		}\
		/* UNDO ALL 8 MOVES FOR d */ \
		if (4 < d) {\
			/* forward */ \
			if (4 < d) {\
				dst = d;\
				org = dst - 4;\
				undoneMove = 24;\
				if (a != org && b != org && c != org) {\
					d = org;\
					g = dst;\
					code\
					g = 0;\
					d = dst;\
				}\
			}\
			/* forward right */ \
			if (4 < d && d % 4 != 1) {\
				dst = d;\
				org = dst - 5;\
				undoneMove = 25;\
				if (a != org && b != org && c != org) {\
					d = org;\
					g = dst;\
					code\
					g = 0;\
					d = dst;\
				}\
			}\
			/* right */ \
			if (d % 4 != 1) {\
				dst = d;\
				org = dst - 1;\
				undoneMove = 26;\
				if (a != org && b != org && c != org) {\
					d = org;\
					g = dst;\
					code\
					g = 0;\
					d = dst;\
				}\
			}\
			/* backward right */ \
			if (d < 17 && d % 4 != 1) {\
				dst = d;\
				org = dst + 3;\
				undoneMove = 27;\
				if (a != org && b != org && c != org) {\
					d = org;\
					g = dst;\
					code\
					g = 0;\
					d = dst;\
				}\
			}\
			/* backward */ \
			if (d < 17) {\
				dst = d;\
				org = dst + 4;\
				undoneMove = 28;\
				if (a != org && b != org && c != org) {\
					d = org;\
					g = dst;\
					code\
					g = 0;\
					d = dst;\
				}\
			}\
			/* backward left */ \
			if (d < 17 && d % 4 != 0) {\
				dst = d;\
				org = dst + 5;\
				undoneMove = 29;\
				if (a != org && b != org && c != org) {\
					d = org;\
					g = dst;\
					code\
					g = 0;\
					d = dst;\
				}\
			}\
			/* left */ \
			if (d % 4 != 0) {\
				dst = d;\
				org = dst + 1;\
				undoneMove = 30;\
				if (a != org && b != org && c != org) {\
					d = org;\
					g = dst;\
					code\
					g = 0;\
					d = dst;\
				}\
			}\
			/* forward left */ \
			if (4 < d && d % 4 != 0) {\
				dst = d;\
				org = dst - 3;\
				undoneMove = 31;\
				if (a != org && b != org && c != org) {\
					d = org;\
					g = dst;\
					code\
					g = 0;\
					d = dst;\
				}\
			}\
		}\
	}\
}
