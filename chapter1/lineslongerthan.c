#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
#define MINLINE 80

main() {
  // loop till EOF
  // if line longer than minline print line
  int c, len;
  char curline[MAXLINE];
  
  len = 0;
  while ((c = getchar()) != EOF) {
    curline[len] = c;
    ++len;
    if (c == '\n') {
      curline[len] = '\0';
      if (len >= MINLINE)
	printf("len %d : %s", len, curline);
      len = 0;
    }
  }
  return 0;

}
