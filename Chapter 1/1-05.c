/*
  Solution to exercise 1-5
  
  Convert celcius to fahrenheit in reverse over high to low
*/


#include <stdio.h>

main()
{
  #define LOWER 0
  #define UPPER 300
  #define STEP 20

  float fahr, celcius;

  fahr = UPPER;
  printf("%s\n", "Reversed table");
  printf("%3s %10s", "fahr", "celcius\n");
  while (fahr >= LOWER) {
    celcius = 5.0/9.0 * (fahr - 32.0);
    printf ("%3.0f %10.1f\n", fahr, celcius);
    fahr = fahr - STEP;
  }

  celcius = UPPER;
  printf("%s\n", "Reversed table");
  printf("%3s %10s", "celcius", "fahr\n");
  while (celcius >= LOWER) {
    fahr = celcius * 9.0/5.0 + 32;
    printf("%3.0f %10.1f\n", celcius, fahr);
    celcius = celcius - STEP;
  }
}
