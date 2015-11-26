#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
  int state, wordlen, c, i, j, k;
  int wordlengths[20];
  state = OUT;
  wordlen = 0;
  for (i = 0; i < 20; i++)
    wordlengths[i] = 0;
  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      state = IN;
      ++wordlen;
    }
    else if (state == IN) {
      state = OUT;
      ++wordlengths[wordlen];
      wordlen = 0;
    }
  }
  for (i = 1; i < 20; i++) {
    if (i < 10)
      printf("len %d  |", i);
    else
      printf("len %d |", i);
    for (j = 0; j < wordlengths[i]; j++)
      printf("X");
    for (k = 0; k < 20 - wordlengths[i]; k++)
      printf(" ");
    printf("|\n");
  }
}
