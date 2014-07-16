/*
Returns a move, that wins the game
Always returns the same move for a position
Prefers to win by elimination
Returns -1 if winning is not possible
*/
short get_first_winning_move(short a, short b, short c, short d, short e, short f, short g, short h) {
	/* Use a to eliminate g */
	if (a != 0 && e == 0 && f == 0 && g != 0 && h == 0) {
		if (a + 4 == g)
			return 0;
		if (a + 5 == g && a % 4 != 0)
			return 1;
		if (a + 1 == g && a % 4 != 0)
			return 2;
		if (a - 3 == g && a % 4 != 0 && 8 < a)
			return 3;
		if (a - 4 == g               && 8 < a)
			return 4;
		if (a - 5 == g && a % 4 != 1 && 8 < a)
			return 5;
		if (a - 1 == g && a % 4 != 1)
			return 6;
		if (a + 3 == g && a % 4 != 1)
			return 7;
	}
	/* Use a to eliminate h */
	if (a != 0 && e == 0 && f == 0 && g == 0 && h != 0) {
		if (a + 4 == h)
			return 0;
		if (a + 5 == h && a % 4 != 0)
			return 1;
		if (a + 1 == h && a % 4 != 0)
			return 2;
		if (a - 3 == h && a % 4 != 0 && 8 < a)
			return 3;
		if (a - 4 == h               && 8 < a)
			return 4;
		if (a - 5 == h && a % 4 != 1 && 8 < a)
			return 5;
		if (a - 1 == h && a % 4 != 1)
			return 6;
		if (a + 3 == h && a % 4 != 1)
			return 7;
	}
	/* Use b to eliminate e */
	if (b != 0 && e != 0 && f == 0 && g == 0 && h == 0) {
		if (b + 4 == e)
			return 8;
		if (b + 5 == e && b % 4 != 0)
			return 9;
		if (b + 1 == e && b % 4 != 0)
			return 10;
		if (b - 3 == e && b % 4 != 0 && 8 < b)
			return 11;
		if (b - 4 == e               && 8 < b)
			return 12;
		if (b - 5 == e && b % 4 != 1 && 8 < b)
			return 13;
		if (b - 1 == e && b % 4 != 1)
			return 14;
		if (b + 3 == e && b % 4 != 1)
			return 15;
	}
	/* Use b to eliminate h */
	if (b != 0 && e == 0 && f == 0 && g == 0 && h != 0) {
		if (b + 4 == h)
			return 8;
		if (b + 5 == h && b % 4 != 0)
			return 9;
		if (b + 1 == h && b % 4 != 0)
			return 10;
		if (b - 3 == h && b % 4 != 0 && 8 < b)
			return 11;
		if (b - 4 == h               && 8 < b)
			return 12;
		if (b - 5 == h && b % 4 != 1 && 8 < b)
			return 13;
		if (b - 1 == h && b % 4 != 1)
			return 14;
		if (b + 3 == h && b % 4 != 1)
			return 15;
	}
	/* Use c to eliminate f */
	if (c != 0 && e == 0 && f != 0 && g == 0 && h == 0) {
		if (c + 4 == f)
			return 16;
		if (c + 5 == f && c % 4 != 0)
			return 17;
		if (c + 1 == f && c % 4 != 0)
			return 18;
		if (c - 3 == f && c % 4 != 0 && 8 < c)
			return 19;
		if (c - 4 == f               && 8 < c)
			return 20;
		if (c - 5 == f && c % 4 != 1 && 8 < c)
			return 21;
		if (c - 1 == f && c % 4 != 1)
			return 22;
		if (c + 3 == f && c % 4 != 1)
			return 23;
	}
	/* Use d to eliminate g */
	if (d != 0 && e == 0 && f == 0 && g != 0 && h == 0) {
		if (d + 4 == g)
			return 24;
		if (d + 5 == g && d % 4 != 0)
			return 25;
		if (d + 1 == g && d % 4 != 0)
			return 26;
		if (d - 3 == g && d % 4 != 0 && 8 < d)
			return 27;
		if (d - 4 == g               && 8 < d)
			return 28;
		if (d - 5 == g && d % 4 != 1 && 8 < d)
			return 29;
		if (d - 1 == g && d % 4 != 1)
			return 30;
		if (d + 3 == g && d % 4 != 1)
			return 31;
	}
	/* a moves on last row */
	if((a == 17 && e != 21 && f != 21)
	|| (a == 18 && e != 22 && f != 22)
	|| (a == 19 && e != 23 && f != 23)
	|| (a == 20 && e != 24 && f != 24))
		return 0;
	if((a == 17 && e != 22 && f != 22)
	|| (a == 18 && e != 23 && f != 23)
	|| (a == 19 && e != 24 && f != 24))
		return 1;
	if((a == 18 && e != 21 && f != 21)
	|| (a == 19 && e != 22 && f != 22)
	|| (a == 20 && e != 23 && f != 23))
		return 7;

	/* b moves on last row */
	if((b == 17 && f != 21 && g != 21)
	|| (b == 18 && f != 22 && g != 22)
	|| (b == 19 && f != 23 && g != 23)
	|| (b == 20 && f != 24 && g != 24))
		return 8;
	if((b == 17 && f != 22 && g != 22)
	|| (b == 18 && f != 23 && g != 23)
	|| (b == 19 && f != 24 && g != 24))
		return 9;
	if((b == 18 && f != 21 && g != 21)
	|| (b == 19 && f != 22 && g != 22)
	|| (b == 20 && f != 23 && g != 23))
		return 15;

	/* c moves on last row */
	if((c == 17 && e != 21 && g != 21 && h != 21)
	|| (c == 18 && e != 22 && g != 22 && h != 22)
	|| (c == 19 && e != 23 && g != 23 && h != 23)
	|| (c == 20 && e != 24 && g != 24 && h != 24))
		return 16;
	if((c == 17 && e != 22 && g != 22 && h != 22)
	|| (c == 18 && e != 23 && g != 23 && h != 23)
	|| (c == 19 && e != 24 && g != 24 && h != 24))
		return 17;
	if((c == 18 && e != 21 && g != 21 && h != 21)
	|| (c == 19 && e != 22 && g != 22 && h != 22)
	|| (c == 20 && e != 23 && g != 23 && h != 23))
		return 23;

	/* d moves on last row */
	if((d == 17 && e != 21 && f != 21 && h != 21)
	|| (d == 18 && e != 22 && f != 22 && h != 22)
	|| (d == 19 && e != 23 && f != 23 && h != 23)
	|| (d == 20 && e != 24 && f != 24 && h != 24))
		return 24;
	if((d == 17 && e != 22 && f != 22 && h != 22)
	|| (d == 18 && e != 23 && f != 23 && h != 23)
	|| (d == 19 && e != 24 && f != 24 && h != 24))
		return 25;
	if((d == 18 && e != 21 && f != 21 && h != 21)
	|| (d == 19 && e != 22 && f != 22 && h != 22)
	|| (d == 20 && e != 23 && f != 23 && h != 23))
		return 31;

	return -1;
}
