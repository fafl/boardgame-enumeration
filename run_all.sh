#!/bin/bash
set -e
set -x

# Compile
make main

# Run iteration 4 and import into sqlite DB
# Iterations 1, 2 and 3 are skipped. They can be computed on the fly and would take a ton of HD space.
./main 4
cat moves.?.txt | sort -n > moves.iteration04.txt && rm moves.?.txt
if [ `wc -l moves.iteration04.txt | awk '{print $1}'` -ne 230639947 ]; then exit 1; fi
sqlite3 moves.db "PRAGMA journal_mode = OFF;"
sqlite3 moves.db "PRAGMA locking_mode = EXCLUSIVE;"
sqlite3 moves.db "PRAGMA synchronous = OFF;"
sqlite3 moves.db "CREATE TABLE positions (position integer, move integer, count integer);"
sqlite3 --separator " " moves.db '.import moves.iteration04.txt positions'
sqlite3 moves.db "CREATE UNIQUE INDEX position_index ON positions (position ASC);"

./main 5
cat moves.?.txt | sort -n > moves.iteration05.txt && rm moves.?.txt
if [ `wc -l moves.iteration05.txt | awk '{print $1}'` -ne 143046924 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration05.txt positions'

./main 6
cat moves.?.txt | sort -n > moves.iteration06.txt && rm moves.?.txt
if [ `wc -l moves.iteration06.txt | awk '{print $1}'` -ne 89414104 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration06.txt positions'

./main 7
cat moves.?.txt | sort -n > moves.iteration07.txt && rm moves.?.txt
if [ `wc -l moves.iteration07.txt | awk '{print $1}'` -ne 106380854 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration07.txt positions'

./main 8
cat moves.?.txt | sort -n > moves.iteration08.txt && rm moves.?.txt
if [ `wc -l moves.iteration08.txt | awk '{print $1}'` -ne 55198111 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration08.txt positions'

./main 9
cat moves.?.txt | sort -n > moves.iteration09.txt && rm moves.?.txt
if [ `wc -l moves.iteration09.txt | awk '{print $1}'` -ne 68116035 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration09.txt positions'

./main 10
cat moves.?.txt | sort -n > moves.iteration10.txt && rm moves.?.txt
if [ `wc -l moves.iteration10.txt | awk '{print $1}'` -ne 38613983 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration10.txt positions'

./main 11
cat moves.?.txt | sort -n > moves.iteration11.txt && rm moves.?.txt
if [ `wc -l moves.iteration11.txt | awk '{print $1}'` -ne 64890877 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration11.txt positions'

./main 12
cat moves.?.txt | sort -n > moves.iteration12.txt && rm moves.?.txt
if [ `wc -l moves.iteration12.txt | awk '{print $1}'` -ne 33665125 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration12.txt positions'

./main 13
cat moves.?.txt | sort -n > moves.iteration13.txt && rm moves.?.txt
if [ `wc -l moves.iteration13.txt | awk '{print $1}'` -ne 54835648 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration13.txt positions'

./main 14
cat moves.?.txt | sort -n > moves.iteration14.txt && rm moves.?.txt
if [ `wc -l moves.iteration14.txt | awk '{print $1}'` -ne 28466469 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration14.txt positions'

./main 15
cat moves.?.txt | sort -n > moves.iteration15.txt && rm moves.?.txt
if [ `wc -l moves.iteration15.txt | awk '{print $1}'` -ne 45658027 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration15.txt positions'

./main 16
cat moves.?.txt | sort -n > moves.iteration16.txt && rm moves.?.txt
if [ `wc -l moves.iteration16.txt | awk '{print $1}'` -ne 24747712 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration16.txt positions'

./main 17
cat moves.?.txt | sort -n > moves.iteration17.txt && rm moves.?.txt
if [ `wc -l moves.iteration17.txt | awk '{print $1}'` -ne 36869842 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration17.txt positions'

./main 18
cat moves.?.txt | sort -n > moves.iteration18.txt && rm moves.?.txt
if [ `wc -l moves.iteration18.txt | awk '{print $1}'` -ne 20404246 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration18.txt positions'

./main 19
cat moves.?.txt | sort -n > moves.iteration19.txt && rm moves.?.txt
if [ `wc -l moves.iteration19.txt | awk '{print $1}'` -ne 27574927 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration19.txt positions'

./main 20
cat moves.?.txt | sort -n > moves.iteration20.txt && rm moves.?.txt
if [ `wc -l moves.iteration20.txt | awk '{print $1}'` -ne 14870130 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration20.txt positions'

./main 21
cat moves.?.txt | sort -n > moves.iteration21.txt && rm moves.?.txt
if [ `wc -l moves.iteration21.txt | awk '{print $1}'` -ne 18137894 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration21.txt positions'

./main 22
cat moves.?.txt | sort -n > moves.iteration22.txt && rm moves.?.txt
if [ `wc -l moves.iteration22.txt | awk '{print $1}'` -ne 9639076 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration22.txt positions'

./main 23
cat moves.?.txt | sort -n > moves.iteration23.txt && rm moves.?.txt
if [ `wc -l moves.iteration23.txt | awk '{print $1}'` -ne 10888931 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration23.txt positions'

./main 24
cat moves.?.txt | sort -n > moves.iteration24.txt && rm moves.?.txt
if [ `wc -l moves.iteration24.txt | awk '{print $1}'` -ne 5748707 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration24.txt positions'

./main 25
cat moves.?.txt | sort -n > moves.iteration25.txt && rm moves.?.txt
if [ `wc -l moves.iteration25.txt | awk '{print $1}'` -ne 6244507 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration25.txt positions'

./main 26
cat moves.?.txt | sort -n > moves.iteration26.txt && rm moves.?.txt
if [ `wc -l moves.iteration26.txt | awk '{print $1}'` -ne 3307494 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration26.txt positions'

./main 27
cat moves.?.txt | sort -n > moves.iteration27.txt && rm moves.?.txt
if [ `wc -l moves.iteration27.txt | awk '{print $1}'` -ne 3460633 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration27.txt positions'

./main 28
cat moves.?.txt | sort -n > moves.iteration28.txt && rm moves.?.txt
if [ `wc -l moves.iteration28.txt | awk '{print $1}'` -ne 1856069 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration28.txt positions'

./main 29
cat moves.?.txt | sort -n > moves.iteration29.txt && rm moves.?.txt
if [ `wc -l moves.iteration29.txt | awk '{print $1}'` -ne 1857722 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration29.txt positions'

./main 30
cat moves.?.txt | sort -n > moves.iteration30.txt && rm moves.?.txt
if [ `wc -l moves.iteration30.txt | awk '{print $1}'` -ne 996373 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration30.txt positions'

./main 31
cat moves.?.txt | sort -n > moves.iteration31.txt && rm moves.?.txt
if [ `wc -l moves.iteration31.txt | awk '{print $1}'` -ne 973126 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration31.txt positions'

./main 32
cat moves.?.txt | sort -n > moves.iteration32.txt && rm moves.?.txt
if [ `wc -l moves.iteration32.txt | awk '{print $1}'` -ne 534691 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration32.txt positions'

./main 33
cat moves.?.txt | sort -n > moves.iteration33.txt && rm moves.?.txt
if [ `wc -l moves.iteration33.txt | awk '{print $1}'` -ne 531445 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration33.txt positions'

./main 34
cat moves.?.txt | sort -n > moves.iteration34.txt && rm moves.?.txt
if [ `wc -l moves.iteration34.txt | awk '{print $1}'` -ne 284135 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration34.txt positions'

./main 35
cat moves.?.txt | sort -n > moves.iteration35.txt && rm moves.?.txt
if [ `wc -l moves.iteration35.txt | awk '{print $1}'` -ne 285375 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration35.txt positions'

./main 36
cat moves.?.txt | sort -n > moves.iteration36.txt && rm moves.?.txt
if [ `wc -l moves.iteration36.txt | awk '{print $1}'` -ne 154092 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration36.txt positions'

./main 37
cat moves.?.txt | sort -n > moves.iteration37.txt && rm moves.?.txt
if [ `wc -l moves.iteration37.txt | awk '{print $1}'` -ne 144030 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration37.txt positions'

./main 38
cat moves.?.txt | sort -n > moves.iteration38.txt && rm moves.?.txt
if [ `wc -l moves.iteration38.txt | awk '{print $1}'` -ne 82880 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration38.txt positions'

./main 39
cat moves.?.txt | sort -n > moves.iteration39.txt && rm moves.?.txt
if [ `wc -l moves.iteration39.txt | awk '{print $1}'` -ne 75105 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration39.txt positions'

./main 40
cat moves.?.txt | sort -n > moves.iteration40.txt && rm moves.?.txt
if [ `wc -l moves.iteration40.txt | awk '{print $1}'` -ne 46100 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration40.txt positions'

./main 41
cat moves.?.txt | sort -n > moves.iteration41.txt && rm moves.?.txt
if [ `wc -l moves.iteration41.txt | awk '{print $1}'` -ne 39733 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration41.txt positions'

./main 42
cat moves.?.txt | sort -n > moves.iteration42.txt && rm moves.?.txt
if [ `wc -l moves.iteration42.txt | awk '{print $1}'` -ne 26455 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration42.txt positions'

./main 43
cat moves.?.txt | sort -n > moves.iteration43.txt && rm moves.?.txt
if [ `wc -l moves.iteration43.txt | awk '{print $1}'` -ne 20251 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration43.txt positions'

./main 44
cat moves.?.txt | sort -n > moves.iteration44.txt && rm moves.?.txt
if [ `wc -l moves.iteration44.txt | awk '{print $1}'` -ne 13134 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration44.txt positions'

./main 45
cat moves.?.txt | sort -n > moves.iteration45.txt && rm moves.?.txt
if [ `wc -l moves.iteration45.txt | awk '{print $1}'` -ne 10078 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration45.txt positions'

./main 46
cat moves.?.txt | sort -n > moves.iteration46.txt && rm moves.?.txt
if [ `wc -l moves.iteration46.txt | awk '{print $1}'` -ne 6536 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration46.txt positions'

./main 47
cat moves.?.txt | sort -n > moves.iteration47.txt && rm moves.?.txt
if [ `wc -l moves.iteration47.txt | awk '{print $1}'` -ne 4553 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration47.txt positions'

./main 48
cat moves.?.txt | sort -n > moves.iteration48.txt && rm moves.?.txt
if [ `wc -l moves.iteration48.txt | awk '{print $1}'` -ne 2771 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration48.txt positions'

./main 49
cat moves.?.txt | sort -n > moves.iteration49.txt && rm moves.?.txt
if [ `wc -l moves.iteration49.txt | awk '{print $1}'` -ne 1659 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration49.txt positions'

./main 50
cat moves.?.txt | sort -n > moves.iteration50.txt && rm moves.?.txt
if [ `wc -l moves.iteration50.txt | awk '{print $1}'` -ne 1141 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration50.txt positions'

./main 51
cat moves.?.txt | sort -n > moves.iteration51.txt && rm moves.?.txt
if [ `wc -l moves.iteration51.txt | awk '{print $1}'` -ne 726 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration51.txt positions'

./main 52
cat moves.?.txt | sort -n > moves.iteration52.txt && rm moves.?.txt
if [ `wc -l moves.iteration52.txt | awk '{print $1}'` -ne 527 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration52.txt positions'

./main 53
cat moves.?.txt | sort -n > moves.iteration53.txt && rm moves.?.txt
if [ `wc -l moves.iteration53.txt | awk '{print $1}'` -ne 477 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration53.txt positions'

./main 54
cat moves.?.txt | sort -n > moves.iteration54.txt && rm moves.?.txt
if [ `wc -l moves.iteration54.txt | awk '{print $1}'` -ne 401 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration54.txt positions'

./main 55
cat moves.?.txt | sort -n > moves.iteration55.txt && rm moves.?.txt
if [ `wc -l moves.iteration55.txt | awk '{print $1}'` -ne 217 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration55.txt positions'

./main 56
cat moves.?.txt | sort -n > moves.iteration56.txt && rm moves.?.txt
if [ `wc -l moves.iteration56.txt | awk '{print $1}'` -ne 160 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration56.txt positions'

./main 57
cat moves.?.txt | sort -n > moves.iteration57.txt && rm moves.?.txt
if [ `wc -l moves.iteration57.txt | awk '{print $1}'` -ne 103 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration57.txt positions'

./main 58
cat moves.?.txt | sort -n > moves.iteration58.txt && rm moves.?.txt
if [ `wc -l moves.iteration58.txt | awk '{print $1}'` -ne 71 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration58.txt positions'

./main 59
cat moves.?.txt | sort -n > moves.iteration59.txt && rm moves.?.txt
if [ `wc -l moves.iteration59.txt | awk '{print $1}'` -ne 43 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration59.txt positions'

./main 60
cat moves.?.txt | sort -n > moves.iteration60.txt && rm moves.?.txt
if [ `wc -l moves.iteration60.txt | awk '{print $1}'` -ne 23 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration60.txt positions'

./main 61
cat moves.?.txt | sort -n > moves.iteration61.txt && rm moves.?.txt
if [ `wc -l moves.iteration61.txt | awk '{print $1}'` -ne 13 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration61.txt positions'

./main 62
cat moves.?.txt | sort -n > moves.iteration62.txt && rm moves.?.txt
if [ `wc -l moves.iteration62.txt | awk '{print $1}'` -ne 8 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration62.txt positions'

./main 63
cat moves.?.txt | sort -n > moves.iteration63.txt && rm moves.?.txt
if [ `wc -l moves.iteration63.txt | awk '{print $1}'` -ne 6 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration63.txt positions'

./main 64
cat moves.?.txt | sort -n > moves.iteration64.txt && rm moves.?.txt
if [ `wc -l moves.iteration64.txt | awk '{print $1}'` -ne 5 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration64.txt positions'

./main 65
cat moves.?.txt | sort -n > moves.iteration65.txt && rm moves.?.txt
if [ `wc -l moves.iteration65.txt | awk '{print $1}'` -ne 1 ]; then exit 1; fi
sqlite3 --separator " " moves.db '.import moves.iteration65.txt positions'

# Merge all results
sort -mn moves.iteration??.txt > moves.txt && rm moves.iteration??.txt

# Replace SQLite DB with compacted DB
cat moves.txt | python create_compact_db.py > moves.db && rm moves.txt

