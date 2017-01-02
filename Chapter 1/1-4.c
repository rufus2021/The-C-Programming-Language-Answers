/*
  Solution to exercise 1-4
  
  Convert celcius to fahrenheit
*/

#include <stdio.h>

main()
{
  #define LOWER 0
  #define UPPER 300
  #define STEP 20

  float fahr, celcius;

  celcius = LOWER;
  printf("%3s %10s", "celcius", "fahr\n");
  while (celcius <= UPPER) {
    fahr = celcius * 9.0/5.0 + 32;
    printf("%3.0f %10.1f\n", celcius, fahr);
    celcius = celcius + STEP;
  }
}
