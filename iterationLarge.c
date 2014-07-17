#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "get_first_winning_move_3.h"
#include "helpers.h"
#include "make_move.h"
#include "position_math.h"
#include "turn_board.h"
#include "undo_all_moves.h"

long i_large_handle_position_over_in_iteration(short a, short b, short c, short d, short e, short f, short g, short h,
												short undoneMove, short iteration, FILE * fp, sqlite3 * db) {
	long position;
	short tmp, org, dst;

	// We don't want redundant entries because they are redundant
	if_position_is_mirrored(
		return 0;
	)

	// Calculate if this position needs to be looked up in SQL
	if (get_first_winning_move_3(a, b, c, d, e, f, g, h) != -1)
		return 0;

	// If this position is already in the database, it is not new
	encode_position()
	if (position_exists_in_database(position, db))
		return 0;

	// Even iterations mean that the position may be lost
	if (iteration % 2 == 0) {
		// Check all moves: If we can "escape" into a so far unknown position, we skip this position
		short firstLosingMove = -1;
		for (short move = 31; 0 <= move; move--) {
			make_move(move,
				turn_board()
				encode_position()
				if (get_first_winning_move_3(a, b, c, d, e, f, g, h) == -1 && !position_exists_in_database(position, db))
					// By executing "move", we can escape into an unknown position
					return 0;
				if (position_and_count_exist_in_database(position, iteration - 1, db))
					// Only set first_losing_move if the enemy needs (iteration - 1) moves afterwards
					firstLosingMove = move;
				turn_board()
			)
		}

		// Don't write double records to SQL
		if (firstLosingMove != undoneMove)
			return 0;
	}
	// Uneven iterations are won for sure, but maybe by a different move
	else {
		// Check all moves before undoneMove: If one of them also makes black lose in (iteration-1),
		// we skip this position to avoid duplicate SQL entries
		for (short move = 0; move < undoneMove; move++) {
			make_move(move,
				turn_board()
				encode_position()
				if (position_and_count_exist_in_database(position, iteration - 1, db))
					return 0;
				turn_board()
			)
		}
	}

	// Write this position into the results
	encode_position()
	fprintf(fp, "%ld %hi %hi\n", position, undoneMove, iteration);
	return 1;
}

long i_large_handle_position_over_in_iteration_minus_one(long position, short iteration, FILE * fp, sqlite3 * db) {
	long count = 0;
	short a, b, c, d, e, f, g, h, tmp, org, dst, undoneMove;

	decode_position()
	turn_board()
	undo_all_moves(
		count += i_large_handle_position_over_in_iteration(a, b, c, d, e, f, g, h, undoneMove, iteration, fp, db);
	)
	mirror_position()
	undo_all_moves(
		count += i_large_handle_position_over_in_iteration(a, b, c, d, e, f, g, h, undoneMove, iteration, fp, db);
	)

	return count;
}

void iterationLarge(short iteration, sqlite3 * db) {
	long position;
	long input_count = 0;
	long result_count = 0;
	char input_file_name[30];
	sprintf(input_file_name, "moves.iteration%.2hi.txt", iteration - 1);
	if (!file_exists(input_file_name)) {
		printf("Input file %s does not exist!\n", input_file_name);
		return;
	}
	FILE * input_file = fopen(input_file_name, "r");
	FILE * fp = fopen("moves.1.txt", "w");

	char * line = NULL;
	size_t len = 0;
	ssize_t read;
	clock_t t0 = clock();

	// Process all results of the last iteration
	while ((read = getline(&line, &len, input_file)) != -1) {
		position = atol(line);
		result_count += i_large_handle_position_over_in_iteration_minus_one(position, iteration, fp, db);

		// Show progress
		input_count++;
		if (input_count % 1000 == 0) {
			printf("Processed %ld positions\r", input_count);
			fflush(stdout);
		}
	}
	printf("Processed %ld positions\n", input_count);
	fclose(input_file);

	fclose(fp);
	clock_t t = clock() - t0;
	printf("Found %ld results in %f seconds.\n", result_count, ((float)t)/CLOCKS_PER_SEC);
}
