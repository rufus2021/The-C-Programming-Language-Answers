/*
  Solution to exercise 1-9

  Read input and replace multiple blanks with one i.e, '   ' -> ' '
*/



#include <stdio.h>

main()
{
  int c;
  int hasSpace = 0;

  while ((c = getchar()) != EOF) {
    if (hasSpace == 0 || (hasSpace == 1 && c != ' ')) {
      putchar(c);
    }

    if (c == ' ') {
      hasSpace = 1;
    } else {
      hasSpace = 0;
    }
  }
}
