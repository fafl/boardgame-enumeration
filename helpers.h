#include <sqlite3.h>
#include <stdbool.h>

// Modifies: undoneMove
/*#define mirror_undone_move() {
	undoneMove = 8 * (undoneMove / 8) + 7 - ((undoneMove - 1) % 8);
}*/

bool file_exists(const char * filename);

bool position_exists_in_database(long position, sqlite3 * db);

bool position_and_count_exist_in_database(long position, short count, sqlite3 * db);
