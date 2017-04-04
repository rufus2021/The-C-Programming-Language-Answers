/*
  Solution to exercise 1-16

  Print arbitrarily long line
*/

#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);


main()
{

  int len;
  char line[MAXLINE];
  char longest[MAXLINE];

  while ((len = get_line(line, MAXLINE)) > 0) {
    copy(longest, line);
    if (len > 80) {
      printf("longest line is ----- %s and it\'s length is %d'", longest, len);
    }
  }

  return 0;
}

int get_line(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  return i;
}

void copy(char to[], char from[])
{
  int i;

  i = 0;

  while ((to[i] = from[i]) != '\0')
    ++i;
}