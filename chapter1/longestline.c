#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getmyline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest line */
main() {

  int len;
  int max;
  int c;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = getmyline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
      // if last char of longest isnt \n then count remaining chars
      if (longest[max-1] != '\n') {
	while (c=getchar() != '\n')
	  ++max;
      }
    }
  }
  if (max > 0) /* there was a line */
    printf("len: %i : %s", max, longest);
  return 0;
}

/* getline: read a line into s, return length */
int getmyline(char s[], int lim) {
  int c, i;

  for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[]) {
  int i;

  i = 0;
  while((to[i] = from[i]) != '\0')
    ++i;
}
