#include "defs.h"
#include "stdio.h"

int main() {
  AllInit();

  S_BOARD board[1];
  char *fen = "r1bq1rk1/pp1nppbp/3p1np1/2pP4/2P1P3/2N1BN2/PP3PPP/R2QKB1R w KQ - 2 10";
  ParseFen(fen, board);
  PrintBoard(board);
  return 0;
}