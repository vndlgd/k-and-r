#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// Modify the temp conversion program to print the table in reverse order 

int main(void) 
{ 
  float fahr, celsius;

  printf("============\n");
  printf("%2c %5c\n", 'F', 'C');
  printf("============\n");

  for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
  }

  printf("\n"); // line break for separation  

  printf("============\n");
  printf("%2c %5c\n", 'C', 'F');
  printf("============\n");

  for (celsius = UPPER; celsius >= LOWER; celsius -= STEP) {
    fahr = ((9 * celsius) / 5) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
  }

  return 0;
}
