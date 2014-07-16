#include <stdbool.h>

#include "get_first_winning_move.h"
#include "get_first_losing_move.h"
#include "make_move.h"
#include "turn_board.h"

/*
If white can make a move, that makes black lose in two moves, then white will win in 3
Returns the first move that does this
If the position is won or lost even sooner, it returns -2
Otherwise it returns -1
*/
short get_first_winning_move_3(short a, short b, short c, short d, short e, short f, short g, short h) {
	short tmp, org, dst;
	// If this position is lost next turn or can be won instantly, it is not won in 3 moves
	if (get_first_losing_move(a, b, c, d, e, f, g, h) != -1)
		return -2;
	for (short move = 0; move < 32; move++) {
		make_move(move,
			// If this move made black lose in 2 moves, we are done
			turn_board()
			if (0 <= get_first_losing_move(a, b, c, d, e, f, g, h))
				return move;
			turn_board()
		)
	}
	return -1;
}
