#include <pthread.h>
#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "helpers.h"
#include "iteration1.h"
#include "iteration2.h"
#include "iteration3.h"
#include "iteration4.h"
#include "iterationLarge.h"
#include "tests.h"

int main(int argc, char* argv[]) {
	printf("== Boardgame Enumeration ==\n");

	if (argc < 2) {
		printf("Please specify which iteration you want to run.\n");
		return 1;
	}
	int iteration = atoi(argv[1]);

	if (file_exists("moves.1.txt") ||
		file_exists("moves.2.txt") ||
		file_exists("moves.3.txt") ||
		file_exists("moves.4.txt")
	) {
		printf("Please delete all moves.?.txt files before proceeding.\n");
		return 1;
	}

	printf("Running tests ...");
	short failed_test_count = runTests();
	if (0 < failed_test_count) {
		printf("\n\n%hi test(s) failed.\n", failed_test_count);
		return 1;
	}
	printf(" ok!\n");

	// Run the specified iteration
	printf("Running iteration %d ...\n", iteration);
	if (1 <= iteration && iteration <= 4) {
		pthread_t thread1, thread2, thread3, thread4;
		short seed1 = 1;
		short seed2 = 2;
		short seed3 = 3;
		short seed4 = 4;
		// Declare an array of function pointers
		void * (*iterations[4])( void * );
		iterations[0] = iteration1;
		iterations[1] = iteration2;
		iterations[2] = iteration3;
		iterations[3] = iteration4;
		// Start all threads
		pthread_create(&thread1, NULL, iterations[iteration-1], &seed1);
		pthread_create(&thread2, NULL, iterations[iteration-1], &seed2);
		pthread_create(&thread3, NULL, iterations[iteration-1], &seed3);
		pthread_create(&thread4, NULL, iterations[iteration-1], &seed4);
		// Wait for all threads
		pthread_join(thread1, NULL);
		pthread_join(thread2, NULL);
		pthread_join(thread3, NULL);
		pthread_join(thread4, NULL);
	}
	else if (5 <= iteration) {
		// We need DB read access
		sqlite3 *db;
		int rc;
		int flags = 0;
		flags |= SQLITE_OPEN_READONLY;
		flags |= SQLITE_OPEN_FULLMUTEX;
		rc = sqlite3_open_v2("moves.db", &db, flags, NULL);
		if( rc ) {
			fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
			sqlite3_close(db);
			return(1);
		}

		iterationLarge(iteration, db);

		sqlite3_close(db);
	}
	else {
		printf("Nothing to do here!\n");
	}
	
	printf("Finished iteration %d.\n", iteration);

	return 0;
}
