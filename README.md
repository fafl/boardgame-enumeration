Boardgame Enumerator
====================

Introduction
------------

This program creates a database of optimal moves for a specific boardgame. With this database you can run an AI that plays the boardgame perfectly. The [boardgame-webserver](../../../boardgame-webserver) project does this.

According to [this Wikipedia article](http://en.wikipedia.org/wiki/Solved_game) the boardgame can now be considered strongly solved.

Boardgame
---------

The game is similar to chess. It is played by two players, one white and one black, on a board of 4 * 6 squares, where each player faces the short side. Each player owns four pieces: The rock, the paper, the scissors and the well. Before the game starts, each player arranges these pieces in any order on the four squares of the row closest to him (his "base row").

The game is started by the white player. Players take turns alternately until the game is over. To make a move, the player chooses one of his pieces and moves it onto one of the eight squares next to it. A piece can only move to a square that is empty or where an opponent's piece is standing that can be taken. Taken pieces are removed from the game. Each piece can take opponent's pieces according to this table:

| Taking Piece | Taken piece    |
|--------------|----------------|
| Rock         | Scissors       |
| Paper        | Rock, Well     |
| Scissors     | Paper          |
| Well         | Rock, Scissors |

The game is won when a piece reaches the opponent's base row or when all opponent's pieces are taken.

Approach
--------

For each position the database contains the number of moves it takes to win or lose it, assuming that both players play perfectly. Stalemate positions are not stored. A position consists of the squares where the eight pieces are standing. It is assumed to be the white player's turn. To cut storage need in half, only one of two positions is stored, where the positions are mirror-symmetric to the longer axis.

The program runs in iterations. The first iteration finds all positions that can be won in a single move. This is achieved by generating all positions where the white player has won and then undoing all moves that may have lead to it. Duplicates are eliminated.

The second iteration finds all positions that are lost in two moves. To do this, for each position of iteration 1 the board is turned and all possible moves of the white player leading to it are undone, resulting in candidates for iteration 2. A candidate is valid only if any move by the white player results in the black player being able to win in one move. In other words the white player has to lose no matter which move he chooses.

The third iteration finds all positions that can be won in three moves. For each position found by iteration 2 the board is turned and all of white's moves that may have lead to this position are undone. Duplicates are eliminated.

This pattern is repeated until an iteration does not find any results. For the boardgame described above this happens in iteration 66.

When all iterations are done, a compacted database in binary format is created that contains the positions and its number of turns in sorted order. This makes lookups in O(log(n)) time possible.

This approach is transferable to other boardgames where two players take turns alternately. In chess it is known as [retrograde analysis](http://en.wikipedia.org/wiki/Retrograde_analysis).

Why C
-----

I wrote this program in Python first using generators, but the performance was abysmal. With C i was able to write the program using macros, which unfold to a large amount of simple code. This is perfect for GCC to optimize.

Executable Steps
----------------

On my Macbook Air it takes around 20 days of runtime to create the database. The earlier iterations take longer than the latter. The result is a binary file of 6.89 GB. Intermediate storage of around 50 GB is needed.

To create the database, you need to run the file `create_move_database.sh`

Trivia
------

Can you solve this puzzle? The following position can be won in 65 moves:

![Position](/win_in_65.png?raw=true)

The first move is moving spock to C2. The rest is left as an exercise to the reader :P

Consistency check
-----------------

You can check your files after each iteration. They should have the following number of lines:

| Filename              | Lines      |
|-----------------------|-----------:|
| moves.iteration04.txt | 230639947  |
| moves.iteration05.txt | 143046924  |
| moves.iteration06.txt | 89414104   |
| moves.iteration07.txt | 106380854  |
| moves.iteration08.txt | 55198111   |
| moves.iteration09.txt | 68116035   |
| moves.iteration10.txt | 38613983   |
| moves.iteration11.txt | 64890877   |
| moves.iteration12.txt | 33665125   |
| moves.iteration13.txt | 54835648   |
| moves.iteration14.txt | 28466469   |
| moves.iteration15.txt | 45658027   |
| moves.iteration16.txt | 24747712   |
| moves.iteration17.txt | 36869842   |
| moves.iteration18.txt | 20404246   |
| moves.iteration19.txt | 27574927   |
| moves.iteration20.txt | 14870130   |
| moves.iteration21.txt | 18137894   |
| moves.iteration22.txt | 9639076    |
| moves.iteration23.txt | 10888931   |
| moves.iteration24.txt | 5748707    |
| moves.iteration25.txt | 6244507    |
| moves.iteration26.txt | 3307494    |
| moves.iteration27.txt | 3460633    |
| moves.iteration28.txt | 1856069    |
| moves.iteration29.txt | 1857722    |
| moves.iteration30.txt | 996373     |
| moves.iteration31.txt | 973126     |
| moves.iteration32.txt | 534691     |
| moves.iteration33.txt | 531445     |
| moves.iteration34.txt | 284135     |
| moves.iteration35.txt | 285375     |
| moves.iteration36.txt | 154092     |
| moves.iteration37.txt | 144030     |
| moves.iteration38.txt | 82880      |
| moves.iteration39.txt | 75105      |
| moves.iteration40.txt | 46100      |
| moves.iteration41.txt | 39733      |
| moves.iteration42.txt | 26455      |
| moves.iteration43.txt | 20251      |
| moves.iteration44.txt | 13134      |
| moves.iteration45.txt | 10078      |
| moves.iteration46.txt | 6536       |
| moves.iteration47.txt | 4553       |
| moves.iteration48.txt | 2771       |
| moves.iteration49.txt | 1659       |
| moves.iteration50.txt | 1141       |
| moves.iteration51.txt | 726        |
| moves.iteration52.txt | 527        |
| moves.iteration53.txt | 477        |
| moves.iteration54.txt | 401        |
| moves.iteration55.txt | 217        |
| moves.iteration56.txt | 160        |
| moves.iteration57.txt | 103        |
| moves.iteration58.txt | 71         |
| moves.iteration59.txt | 43         |
| moves.iteration60.txt | 23         |
| moves.iteration61.txt | 13         |
| moves.iteration62.txt | 8          |
| moves.iteration63.txt | 6          |
| moves.iteration64.txt | 5          |
| moves.iteration65.txt | 1          |
