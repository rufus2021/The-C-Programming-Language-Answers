/*
  Solution to exercise 1-3
  
  Convert fahrenheit to celcius
*/

#include <stdio.h>

main()
{
  #define LOWER 0
  #define UPPER 300
  #define STEP 20

  float fahr, celcius;

  fahr = LOWER;
  printf("%3s %10s", "fahr", "celcius\n");
  while (fahr <= UPPER) {
    celcius = 5.0/9.0 * (fahr - 32.0);
    printf ("%3.0f %10.1f\n", fahr, celcius);
    fahr = fahr + STEP;
  }
}
