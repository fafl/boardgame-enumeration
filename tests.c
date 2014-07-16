#include <stdio.h>

#include "get_first_losing_move.h"
#include "get_first_winning_move_3.h"
#include "get_first_losing_move_4.h"

short test_get_first_losing_move() {
	short result, expected;
	short failed_test_count = 0;

	// Lost anyway
	result = get_first_losing_move(1, 15, 10, 11, 16, 0, 0, 8);
	expected = 0;
	if (result != expected) {
		printf("\ntest_get_first_losing_move(): Expected %hi, got %hi for position (1, 15, 10, 11, 16, 0, 0, 8).",
			expected, result);
		failed_test_count++;
	}

	return failed_test_count;
}

short test_get_first_winning_move_3() {
	short result, expected;
	short failed_test_count = 0;

	// Can be won in 3
	result = get_first_winning_move_3(9, 0, 0, 13, 24, 10, 15, 14);
	expected = 24;
	if (result != expected) {
		printf("\ntest_get_first_winning_move_3(): Expected %hi, got %hi for position (9, 0, 0, 13, 24, 10, 15, 14).",
			expected, result);
		failed_test_count++;
	}

	return failed_test_count;
}

short test_get_first_losing_move_4() {
	short result, expected;
	short failed_test_count = 0;

	// Can be won in 3
	result = get_first_losing_move_4(9, 0, 0, 13, 24, 10, 15, 14);
	expected = -2;
	if (result != expected) {
		printf("\ntest_get_first_losing_move_4(): Expected %hi, got %hi for position (9, 0, 0, 13, 24, 10, 15, 14).",
			expected, result);
		failed_test_count++;
	}

	// Resist a little
	result = get_first_losing_move_4(12, 0, 0, 1, 10, 11, 5, 0);
	expected = 24;
	if (result != expected) {
		printf("\ntest_get_first_losing_move_4(): Expected %hi, got %hi for position (1, 0, 0, 13, 12, 10, 5, 0).",
			expected, result);
		failed_test_count++;
	}

	return failed_test_count;
}

short runTests() {
	short failed_test_count = 0;

	failed_test_count += test_get_first_losing_move();
	failed_test_count += test_get_first_winning_move_3();
	failed_test_count += test_get_first_losing_move_4();

	return failed_test_count;
}

