.PHONY: main

main:
	gcc -std=c99 -Wall -pedantic -O3 -D_REENTRANT -lsqlite3 -DSQLITE_THREADSAFE=1 -o main \
	main.c \
	get_first_winning_move.c \
	get_first_losing_move.c \
	get_first_winning_move_3.c \
	get_first_losing_move_4.c \
	helpers.c \
	iteration1.c \
	iteration2.c \
	iteration3.c \
	iteration4.c \
	iterationLarge.c \
	tests.c

