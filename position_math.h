#define if_position_is_mirrored(code) {\
	if (\
		(a != 0 && a % 4 != 1 && a % 4 != 2)\
		||\
		(a == 0 && b != 0 && b % 4 != 1 && b % 4 != 2)\
		||\
		(a == 0 && b == 0 && c != 0 && c % 4 != 1 && c % 4 != 2)\
		||\
		(a == 0 && b == 0 && c == 0 && d != 0 && d % 4 != 1 && d % 4 != 2)\
	) {\
		code\
	}\
}

// Modifies: position
#define encode_position() {\
	position = 0;\
	position |= a;\
	position <<= 5;\
	position |= b;\
	position <<= 5;\
	position |= c;\
	position <<= 5;\
	position |= d;\
	position <<= 5;\
	position |= e;\
	position <<= 5;\
	position |= f;\
	position <<= 5;\
	position |= g;\
	position <<= 5;\
	position |= h;\
}

// Modifies: a, b, c, d, e, f, g and h
#define decode_position() {\
	h =  position        & 31;\
	g = (position >>  5) & 31;\
	f = (position >> 10) & 31;\
	e = (position >> 15) & 31;\
	d = (position >> 20) & 31;\
	c = (position >> 25) & 31;\
	b = (position >> 30) & 31;\
	a = (position >> 35) & 31;\
}

// Modifies: a, b, c, d, e, f, g and h
#define mirror_position() {\
	a = a ? 4 * ((a-1) / 4) + 4 - ((a-1) % 4) : 0;\
	b = b ? 4 * ((b-1) / 4) + 4 - ((b-1) % 4) : 0;\
	c = c ? 4 * ((c-1) / 4) + 4 - ((c-1) % 4) : 0;\
	d = d ? 4 * ((d-1) / 4) + 4 - ((d-1) % 4) : 0;\
	e = e ? 4 * ((e-1) / 4) + 4 - ((e-1) % 4) : 0;\
	f = f ? 4 * ((f-1) / 4) + 4 - ((f-1) % 4) : 0;\
	g = g ? 4 * ((g-1) / 4) + 4 - ((g-1) % 4) : 0;\
	h = h ? 4 * ((h-1) / 4) + 4 - ((h-1) % 4) : 0;\
}
