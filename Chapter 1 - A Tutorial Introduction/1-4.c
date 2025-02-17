#include <stdio.h>

// print Fahrenheit-Celsius table

int main(void) 
{ 
  int lower = 0;
  int upper = 300;
  int step = 20;

  float celsius, fahr;

  printf("============\n");
  printf("%2c %5c\n", 'C', 'F');
  printf("============\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = ((9 * celsius) / 5) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius += step;
  }

  return 0;
}
