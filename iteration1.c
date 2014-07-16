#include <stdio.h>
#include <time.h>

#include "generate_won_positions.h"
#include "get_first_winning_move.h"
#include "helpers.h"
#include "position_math.h"
#include "undo_all_win_moves.h"

long i1_handle_position_won_in_1(short a, short b, short c, short d, short e, short f, short g, short h, FILE * fp, short undoneMove) {
	//long position;
	if_position_is_mirrored(
		// We don't want redundant entries
		return 0;
	)
	if (get_first_winning_move(a, b, c, d, e, f, g, h) != undoneMove)
		// Make sure this position is unique
		return 0;
	//encode_position()
	//fprintf(fp, "%ld %hi 1\n", position, undoneMove);
	return 1;
}

long i1_handle_won_position(short a, short b, short c, short d, short e, short f, short g, short h, FILE * fp) {
	long count = 0;
	short org, dst, undoneMove;
	undo_all_win_moves(
		// In here every position is won with one ply
		count += i1_handle_position_won_in_1(a, b, c, d, e, f, g, h, fp, undoneMove);
	)
	return count;
}

// All 4 seeds find 3.164.164.197 results
void * iteration1(void * seedPointer) {
	short a, b, c, d, e, f, g, h, tmp;
	long count = 0;
	short seed = *((short *) seedPointer);

	clock_t t0 = clock();

	FILE * fp;
	if (seed == 1)
		fp = fopen("moves.1.txt", "w");
	if (seed == 2)
		fp = fopen("moves.2.txt", "w");
	if (seed == 3)
		fp = fopen("moves.3.txt", "w");
	if (seed == 4)
		fp = fopen("moves.4.txt", "w");

	generate_won_positions(seed,
		count += i1_handle_won_position(a, b, c, d, e, f, g, h, fp);
	)

	fclose(fp);
	clock_t t = clock() - t0;
	printf("Thread %hi found %ld results in %f seconds.\n", seed, count, ((float)t)/CLOCKS_PER_SEC);

	return NULL;
}
