/*
  Solution to exercise 1-8

  Counts \b, \t and \n
*/



#include <stdio.h>

main()
{
  long c;
  int count = 0;

  c = getchar();
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      ++count;
    }
  }
  printf("%d", count);
}
