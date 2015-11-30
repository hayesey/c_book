#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

void reverse(char o[], char r[], int m);

main() {
  int c, len;
  char curline[MAXLINE];
  char revline[MAXLINE];
  
  len = 0;
  while ((c = getchar()) != EOF) {
    if (c != '\n') {
      curline[len] = c;
      ++len;
    }
    else {
      curline[len] = '\0';
      reverse(curline, revline, len);
      printf("reversed line: %s\n", revline);
      len = 0;
    }
  }
  return 0;

}

void reverse(char orig[], char rev[], int maxlen) {
  int i;
  for (i = 0; i < maxlen; ++i)
    rev[(maxlen - 1) - i] = orig[i];
  rev[maxlen] = '\0';
}
