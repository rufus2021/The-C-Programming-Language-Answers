/*
  Solution to exercise 1-6

  Verify that getchar() produces 0 or 1
*/

#include <stdio.h>

main()
{
  int c;

  c = getchar() != EOF;

  printf("%d", c);
}
