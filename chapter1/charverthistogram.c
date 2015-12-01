#include <stdio.h>

main()
{
  int c, i, j, nwhite;
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

  printf("---------------------------------------------------\n");
  for (i = 20; i > 0; --i) {
    for (j = 0; j < 26; j++) {
      if (nchars[j] == i) {
	printf("X ");
	--nchars[j];
      }
      else
	printf("  ");
    }
    printf("\n");
  }
  printf("---------------------------------------------------\n");
  printf("a b c d e f g h i j k l m n o p q r s t u v w x y z\n");
  printf("---------------------------------------------------\n");
  printf("white space = %d\n", nwhite);
  
}
