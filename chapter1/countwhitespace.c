#include <stdio.h>

main()
{
  int c, nw;

    nw = 0;
    while ((c = getchar()) != EOF)
      if ((c == '\n') || (c == '\t') || (c == ' '))
        ++nw;
    printf("%d\n", nw);
}
