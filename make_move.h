#define make_move(move, code) {\
	/* a */ \
	if (move == 0) {\
		if (a != 0 && a < 21) {\
			org = a;\
			dst = org + 4;\
			if (dst != b && dst != c && dst != d &&\
				dst != e && dst != f) {\
				a = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else if (h == dst) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				a = org;\
			}\
		}\
	}\
	else if (move == 1) {\
		if (a != 0 && a < 21 && a % 4 != 0) {\
			org = a;\
			dst = org + 5;\
			if (dst != b && dst != c && dst != d &&\
				dst != e && dst != f) {\
				a = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else if (h == dst) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				a = org;\
			}\
		}\
	}\
	else if (move == 2) {\
		if (a != 0 && a % 4 != 0) {\
			org = a;\
			dst = org + 1;\
			if (dst != b && dst != c && dst != d &&\
				dst != e && dst != f) {\
				a = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else if (h == dst) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				a = org;\
			}\
		}\
	}\
	else if (move == 3) {\
		if (a != 0 && 4 < a && a % 4 != 0) {\
			org = a;\
			dst = org - 3;\
			if (dst != b && dst != c && dst != d &&\
				dst != e && dst != f) {\
				a = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else if (h == dst) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				a = org;\
			}\
		}\
	}\
	else if (move == 4) {\
		if (a != 0 && 4 < a) {\
			org = a;\
			dst = org - 4;\
			if (dst != b && dst != c && dst != d &&\
				dst != e && dst != f) {\
				a = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else if (h == dst) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				a = org;\
			}\
		}\
	}\
	else if (move == 5) {\
		if (a != 0 && 4 < a && a % 4 != 1) {\
			org = a;\
			dst = org - 5;\
			if (dst != b && dst != c && dst != d &&\
				dst != e && dst != f) {\
				a = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else if (h == dst) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				a = org;\
			}\
		}\
	}\
	else if (move == 6) {\
		if (a != 0 && a % 4 != 1) {\
			org = a;\
			dst = org - 1;\
			if (dst != b && dst != c && dst != d &&\
				dst != e && dst != f) {\
				a = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else if (h == dst) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				a = org;\
			}\
		}\
	}\
	else if (move == 7) {\
		if (a != 0 && a < 21 && a % 4 != 1) {\
			org = a;\
			dst = org + 3;\
			if (dst != b && dst != c && dst != d &&\
				dst != e && dst != f) {\
				a = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else if (h == dst) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				a = org;\
			}\
		}\
	}\
	/* b */ \
	else if (move == 8) {\
		if (b != 0 && b < 21) {\
			org = b;\
			dst = org + 4;\
			if (dst != a && dst != c && dst != d &&\
				dst != f && dst != g) {\
				b = dst;\
				if (e == dst) {\
					e = 0;\
					code\
					e = dst;\
				}\
				else if (dst == h) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				b = org;\
			}\
		}\
	}\
	else if (move == 9) {\
		if (b != 0 && b < 21 && b % 4 != 0) {\
			org = b;\
			dst = org + 5;\
			if (dst != a && dst != c && dst != d &&\
				dst != f && dst != g) {\
				b = dst;\
				if (e == dst) {\
					e = 0;\
					code\
					e = dst;\
				}\
				else if (dst == h) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				b = org;\
			}\
		}\
	}\
	else if (move == 10) {\
		if (b != 0 && b % 4 != 0) {\
			org = b;\
			dst = org + 1;\
			if (dst != a && dst != c && dst != d &&\
				dst != f && dst != g) {\
				b = dst;\
				if (e == dst) {\
					e = 0;\
					code\
					e = dst;\
				}\
				else if (dst == h) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				b = org;\
			}\
		}\
	}\
	else if (move == 11) {\
		if (b != 0 && 4 < b && b % 4 != 0) {\
			org = b;\
			dst = org - 3;\
			if (dst != a && dst != c && dst != d &&\
				dst != f && dst != g) {\
				b = dst;\
				if (e == dst) {\
					e = 0;\
					code\
					e = dst;\
				}\
				else if (dst == h) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				b = org;\
			}\
		}\
	}\
	else if (move == 12) {\
		if (b != 0 && 4 < b) {\
			org = b;\
			dst = org - 4;\
			if (dst != a && dst != c && dst != d &&\
				dst != f && dst != g) {\
				b = dst;\
				if (e == dst) {\
					e = 0;\
					code\
					e = dst;\
				}\
				else if (dst == h) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				b = org;\
			}\
		}\
	}\
	else if (move == 13) {\
		if (b != 0 && 4 < b && b % 4 != 1) {\
			org = b;\
			dst = org - 5;\
			if (dst != a && dst != c && dst != d &&\
				dst != f && dst != g) {\
				b = dst;\
				if (e == dst) {\
					e = 0;\
					code\
					e = dst;\
				}\
				else if (dst == h) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				b = org;\
			}\
		}\
	}\
	else if (move == 14) {\
		if (b != 0 && b % 4 != 1) {\
			org = b;\
			dst = org - 1;\
			if (dst != a && dst != c && dst != d &&\
				dst != f && dst != g) {\
				b = dst;\
				if (e == dst) {\
					e = 0;\
					code\
					e = dst;\
				}\
				else if (dst == h) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				b = org;\
			}\
		}\
	}\
	else if (move == 15) {\
		if (b != 0 && b < 21 && b % 4 != 1) {\
			org = b;\
			dst = org + 3;\
			if (dst != a && dst != c && dst != d &&\
				dst != f && dst != g) {\
				b = dst;\
				if (e == dst) {\
					e = 0;\
					code\
					e = dst;\
				}\
				else if (dst == h) {\
					h = 0;\
					code\
					h = dst;\
				}\
				else {\
					code\
				}\
				b = org;\
			}\
		}\
	}\
	/* c */ \
	else if (move == 16) {\
		if (c != 0 && c < 21) {\
			org = c;\
			dst = org + 4;\
			if (dst != a && dst != b && dst != d &&\
				dst != e && dst != g && dst != h) {\
				c = dst;\
				if (f == dst) {\
					f = 0;\
					code\
					f = dst;\
				}\
				else {\
					code\
				}\
				c = org;\
			}\
		}\
	}\
	else if (move == 17) {\
		if (c != 0 && c < 21 && c % 4 != 0) {\
			org = c;\
			dst = org + 5;\
			if (dst != a && dst != b && dst != d &&\
				dst != e && dst != g && dst != h) {\
				c = dst;\
				if (f == dst) {\
					f = 0;\
					code\
					f = dst;\
				}\
				else {\
					code\
				}\
				c = org;\
			}\
		}\
	}\
	else if (move == 18) {\
		if (c != 0 && c % 4 != 0) {\
			org = c;\
			dst = org + 1;\
			if (dst != a && dst != b && dst != d &&\
				dst != e && dst != g && dst != h) {\
				c = dst;\
				if (f == dst) {\
					f = 0;\
					code\
					f = dst;\
				}\
				else {\
					code\
				}\
				c = org;\
			}\
		}\
	}\
	else if (move == 19) {\
		if (c != 0 && 4 < c && c % 4 != 0) {\
			org = c;\
			dst = org - 3;\
			if (dst != a && dst != b && dst != d &&\
				dst != e && dst != g && dst != h) {\
				c = dst;\
				if (f == dst) {\
					f = 0;\
					code\
					f = dst;\
				}\
				else {\
					code\
				}\
				c = org;\
			}\
		}\
	}\
	else if (move == 20) {\
		if (c != 0 && 4 < c) {\
			org = c;\
			dst = org - 4;\
			if (dst != a && dst != b && dst != d &&\
				dst != e && dst != g && dst != h) {\
				c = dst;\
				if (f == dst) {\
					f = 0;\
					code\
					f = dst;\
				}\
				else {\
					code\
				}\
				c = org;\
			}\
		}\
	}\
	else if (move == 21) {\
		if (c != 0 && 4 < c && c % 4 != 1) {\
			org = c;\
			dst = org - 5;\
			if (dst != a && dst != b && dst != d &&\
				dst != e && dst != g && dst != h) {\
				c = dst;\
				if (f == dst) {\
					f = 0;\
					code\
					f = dst;\
				}\
				else {\
					code\
				}\
				c = org;\
			}\
		}\
	}\
	else if (move == 22) {\
		if (c != 0 && c % 4 != 1) {\
			org = c;\
			dst = org - 1;\
			if (dst != a && dst != b && dst != d &&\
				dst != e && dst != g && dst != h) {\
				c = dst;\
				if (f == dst) {\
					f = 0;\
					code\
					f = dst;\
				}\
				else {\
					code\
				}\
				c = org;\
			}\
		}\
	}\
	else if (move == 23) {\
		if (c != 0 && c < 21 && c % 4 != 1) {\
			org = c;\
			dst = org + 3;\
			if (dst != a && dst != b && dst != d &&\
				dst != e && dst != g && dst != h) {\
				c = dst;\
				if (f == dst) {\
					f = 0;\
					code\
					f = dst;\
				}\
				else {\
					code\
				}\
				c = org;\
			}\
		}\
	}\
	/* d */ \
	else if (move == 24) {\
		if (d != 0 && d < 21) {\
			org = d;\
			dst = org + 4;\
			if (dst != a && dst != b && dst != c &&\
				dst != e && dst != f && dst != h) {\
				d = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else {\
					code\
				}\
				d = org;\
			}\
		}\
	}\
	else if (move == 25) {\
		if (d != 0 && d < 21 && d % 4 != 0) {\
			org = d;\
			dst = org + 5;\
			if (dst != a && dst != b && dst != c &&\
				dst != e && dst != f && dst != h) {\
				d = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else {\
					code\
				}\
				d = org;\
			}\
		}\
	}\
	else if (move == 26) {\
		if (d != 0 && d % 4 != 0) {\
			org = d;\
			dst = org + 1;\
			if (dst != a && dst != b && dst != c &&\
				dst != e && dst != f && dst != h) {\
				d = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else {\
					code\
				}\
				d = org;\
			}\
		}\
	}\
	else if (move == 27) {\
		if (d != 0 && 4 < d && d % 4 != 0) {\
			org = d;\
			dst = org - 3;\
			if (dst != a && dst != b && dst != c &&\
				dst != e && dst != f && dst != h) {\
				d = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else {\
					code\
				}\
				d = org;\
			}\
		}\
	}\
	else if (move == 28) {\
		if (d != 0 && 4 < d) {\
			org = d;\
			dst = org - 4;\
			if (dst != a && dst != b && dst != c &&\
				dst != e && dst != f && dst != h) {\
				d = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else {\
					code\
				}\
				d = org;\
			}\
		}\
	}\
	else if (move == 29) {\
		if (d != 0 && 4 < d && d % 4 != 1) {\
			org = d;\
			dst = org - 5;\
			if (dst != a && dst != b && dst != c &&\
				dst != e && dst != f && dst != h) {\
				d = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else {\
					code\
				}\
				d = org;\
			}\
		}\
	}\
	else if (move == 30) {\
		if (d != 0 && d % 4 != 1) {\
			org = d;\
			dst = org - 1;\
			if (dst != a && dst != b && dst != c &&\
				dst != e && dst != f && dst != h) {\
				d = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else {\
					code\
				}\
				d = org;\
			}\
		}\
	}\
	else if (move == 31) {\
		if (d != 0 && d < 21 && d % 4 != 1) {\
			org = d;\
			dst = org + 3;\
			if (dst != a && dst != b && dst != c &&\
				dst != e && dst != f && dst != h) {\
				d = dst;\
				if (g == dst) {\
					g = 0;\
					code\
					g = dst;\
				}\
				else {\
					code\
				}\
				d = org;\
			}\
		}\
	}\
}
