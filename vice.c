#include "defs.h"
#include "stdio.h"

int main() {
  AllInit();
  U64 playBitBoard = 0ULL;
  printf("Start: \n\n");
  PrintBitBoard(playBitBoard);

  playBitBoard |= (1ULL << SQ64(D2));
  printf("D2 added: \n\n");
  PrintBitBoard(playBitBoard);

  playBitBoard |= (1ULL << SQ64(E4));
  printf("G2 added: \n\n");
  PrintBitBoard(playBitBoard);
  // int index;
  // for (index = 0; index < BRD_SQ_NUM; index++) {
  //   if (index % 10 == 0)
  //     printf("\n");
  //   printf("%5d", Sq120ToSq64[index]);
  // }

  // printf("\n");
  // printf("\n");

  // for (index = 0; index < 64; index++) {
  //   if (index % 8 == 0)
  //     printf("\n");
  //   printf("%5d", Sq64ToSq120[index]);
  // }

  return 0;
}