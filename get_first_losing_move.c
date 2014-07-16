#include <stdbool.h>

#include "get_first_winning_move.h"
#include "make_move.h"
#include "turn_board.h"

/*
If this position is lost with blacks next move, this function returns the first possible move
If the position can be won instantly, it returns -2
Otherwise it returns -1
*/
short get_first_losing_move(short a, short b, short c, short d, short e, short f, short g, short h) {
	short tmp, org, dst;
	// If this position can be won instantly, it is not lost
	if (get_first_winning_move(a, b, c, d, e, f, g, h) != -1)
		return -2;
	short first_losing_move = -1;
	for (short move = 31; 0 <= move; move--) {
		make_move(move,
			// If the resulting position is not immediately winnable by black,
			// this position is not lost within the next two moves
			turn_board()
			if (get_first_winning_move(a, b, c, d, e, f, g, h) == -1)
				// Not lost! Can still do this move!
				return -1;
			turn_board()
			// Set first_losing move
			first_losing_move = move;
		)
	}
	return first_losing_move;
}
