/*
  Solution to exercise 1-10

  Read input and replace \b, \t and \ with its value
*/



#include <stdio.h>

main()
{
  int c;

  while ((c = getchar()) != EOF) {

    if (c == '\t')
      printf("%s", "\\t");
    else if (c == '\b')
      printf("%s", "\\b");
    else if (c == '\\')
      printf("%s", "\\\\");
    else
      putchar(c);

  }

}
