#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

main() {
  int c, len;
  char curline[MAXLINE];
  
  len = 0;
  while ((c = getchar()) != EOF) {
    if (c != '\t' && c != ' ' && c != '\n') {
      curline[len] = c;
      ++len;
    }
    if (c == '\n' && len > 0) {
      curline[len] = '\0';
      printf("stripped line: %s", curline);
      len = 0;
    }
  }
  return 0;

}
