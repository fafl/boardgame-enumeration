#include <stdbool.h>

#include "get_first_winning_move_3.h"
#include "make_move.h"
#include "turn_board.h"

/*
If whites best move enables black to win after 4 moves (not sooner), this function returns the first possible move for white
If the position is won or lost even sooner, it returns -2
Otherwise it returns -1
*/
short get_first_losing_move_4(short a, short b, short c, short d, short e, short f, short g, short h) {
	short tmp, org, dst;
	// If this position can be won in 3 moves, is lost in 2 moves or can be won instantly, it is not lost in 4 moves
	if (get_first_winning_move_3(a, b, c, d, e, f, g, h) != -1)
		return -2;
	short first_losing_move = -1;
	for (short move = 31; 0 <= move; move--) {
		make_move(move,
			turn_board()
			// If the resulting position is not winnable by black in three moves,
			// this position is not lost within the next four moves
			tmp = get_first_winning_move_3(a, b, c, d, e, f, g, h);
			if (tmp == -1)
				// Not lost! Can still do this move!
				return -1;
			if (0 <= tmp)
				// Only set first_losing_move if the enemy needs 3 moves afterwards
				first_losing_move = move;
			turn_board()
		)
	}
	return first_losing_move;
}
