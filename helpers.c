#include <sqlite3.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

#include "position_math.h"

bool file_exists(const char * filename) {
	return access( filename, F_OK ) != -1;
}

bool query_has_result(char * sql_text, sqlite3 * db) {
	sqlite3_stmt * stmt;
	const char * tail;
	sqlite3_prepare_v2(db, sql_text, 1000, &stmt, &tail);
	bool result = (sqlite3_step(stmt) == SQLITE_ROW);
	sqlite3_finalize(stmt);
	return result;
}

bool position_and_count_exist_in_database(long position, short count, sqlite3 * db) {
	char sql_text[100];

	// Only half the positions are actually in SQL
	short a, b, c, d, e, f, g, h;
	decode_position()
	if_position_is_mirrored(
		mirror_position()
		encode_position()
	)

	sprintf(sql_text, "SELECT position FROM positions WHERE position = %ld AND count = %hi;", position, count);
	return query_has_result(sql_text, db);
}

bool position_exists_in_database(long position, sqlite3 * db) {
	char sql_text[100];

	// Only half the positions are actually in SQL
	short a, b, c, d, e, f, g, h;
	decode_position()
	if_position_is_mirrored(
		mirror_position()
		encode_position()
	)

	sprintf(sql_text, "SELECT position FROM positions WHERE position = %ld;", position);
	return query_has_result(sql_text, db);
}
