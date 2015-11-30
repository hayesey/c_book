#include <stdio.h>

main()
{
  int c, i, j, k, nwhite;
  int nchars[26];

  nwhite = j = k = 0;
  for (i = 0; i < 26; ++i)
    nchars[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z')
      ++nchars[c-'a'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
  }
  /*
  printf("chars = ");
  for (i = 0; i < 26; ++i)
    if (nchars[i] != 0)
      printf("%c: %d, ", i + 'a', nchars[i]);
  */
  for (i = 0; i < 26; i++) {
    printf("char %c |", i + 'a');
    for (j = 0; j < nchars[i]; j++)
      printf("X");
    for (k = 0; k < 20 - nchars[i]; k++)
      printf(" ");
    printf("|\n");
  }
  
  printf("\nwhite space = %d\n", nwhite);
  
}
