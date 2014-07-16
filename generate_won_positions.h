#include "swap.h"

// Calls the code for each permutation
// The four variables have to be in descending order
// Zeroes do not get swapped
#define permutations_of_four(p1, p2, p3, p4, code) {\
	if (p3 != 0) {\
		/* startswith p1 */ \
		swap(p3, p4, tmp)\
		code\
		swap(p2, p4, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p2, p4, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p1, p4, tmp)\
		code\
		/* startswith p2 */ \
		swap(p3, p4, tmp)\
		code\
		swap(p2, p4, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p2, p4, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p1, p3, tmp)\
		code\
		/* startswith p3 */ \
		swap(p3, p4, tmp)\
		code\
		swap(p2, p4, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p2, p4, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p1, p2, tmp)\
		code\
		/* startswith p4 */ \
		swap(p3, p4, tmp)\
		code\
		swap(p2, p3, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p2, p3, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p1, p4, tmp)\
		code\
	}\
	else if (p2 != 0) {\
		swap(p2, p3, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p1, p4, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p2, p3, tmp)\
		code\
		swap(p1, p3, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p2, p4, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p2, p4, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p1, p4, tmp)\
		swap(p2, p3, tmp)\
		code\
	}\
	else if (p1 != 0) {\
		swap(p1, p2, tmp)\
		code\
		swap(p2, p3, tmp)\
		code\
		swap(p3, p4, tmp)\
		code\
		swap(p1, p4, tmp)\
		code\
	}\
	else {\
		code\
	}\
}

#define generate_won_positions_by_elimination(seed, code) {\
	e = 0;\
	f = 0;\
	g = 0;\
	h = 0;\
	for (a = 1; a < 25; a++)\
	{\
		if (a % 4 + 1 != seed)\
			continue;\
		for (b = 0; b < 21; b++)\
		{\
			if (a <= b)\
				continue;\
			for (c = 0; c < 21; c++)\
			{\
				if (c != 0 && b <= c)\
					continue;\
				for (d = 0; d < 21; d++)\
				{\
					if (d != 0 && c <= d)\
						continue;\
					code\
				}\
			}\
		}\
	}\
}

#define generate_won_positions_by_speed(seed, code) {\
	a = 20 + seed;\
	for (b = 0; b < 21; b++)\
	{\
		for (c = 0; c < 21; c++)\
		{\
			if (c != 0 && b <= c)\
				continue; /* Keep order */ \
			for (d = 0; d < 21; d++)\
			{\
				if (d != 0 && c <= d)\
					continue; /* Keep order */ \
				for (e = 5; e < 25; e++)\
				{\
					if (e == a || e == b || e == c || e == d)\
						continue; /* No double placement */ \
					for (f = 0; f < 25; f++)\
					{\
						if (f != 0 && f < 5)\
							continue; /* Black must not be on the first row */ \
						if (f != 0 && e <= f)\
							continue; /* Keep order */ \
						if (f != 0 && (f == a || f == b || f == c || f == d))\
							continue; /* No double placement */ \
						for (g = 0; g < 25; g++)\
						{\
							if (g != 0 && g < 5)\
								continue; /* Black must not be on the first row */ \
							if (g != 0 && f <= g)\
								continue; /* Keep order */ \
							if (g != 0 && (g == a || g == b || g == c || g == d))\
								continue; /* No double placement */ \
							for (h = 0; h < 25; h++)\
							{\
								if (h != 0 && h < 5)\
									continue; /* Black must not be on the first row */ \
								if (h != 0 && g <= h)\
									continue; /* Keep order */ \
								if (h != 0 && (h == a || h == b || h == c || h == d))\
									continue;\
								code\
							}\
						}\
					}\
				}\
			}\
		}\
	}\
}

#define generate_won_positions(seed, code) {\
	generate_won_positions_by_elimination(seed,\
		permutations_of_four(\
			a, b, c, d,\
			code\
		)\
	)\
	generate_won_positions_by_speed(seed,\
		permutations_of_four(\
			a, b, c, d,\
			permutations_of_four(\
				e, f, g, h,\
				code\
			)\
		)\
	)\
}
