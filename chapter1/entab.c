#include <stdio.h>

#define TABWIDTH 8

main() {
  int c, nc, remainder;
  nc = 1;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      // we have a tab, insert correct number of spaces to next stop
      remainder = TABWIDTH - ((nc-1) % TABWIDTH);
      while (remainder > 0) {
	putchar(' ');
	++nc;
	--remainder;
      }
    } else if (c == '\n') {
      putchar(c);
      nc=1;
    } else {
      putchar(c);
      ++nc;
    }
  }
}
