#include <stdio.h>
#include <limits.h>
#include <float.h>

/* Exercise 2-1. Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types. */

int main(void) 
{
  printf("UNSIGNED TYPES\n");
  printf("UNSIGNED CHAR: %u %u\n", 0, UCHAR_MAX);
  printf("UNSIGNED SHORT: %u %u\n", 0, USHRT_MAX);
  printf("UNSIGNED INT: %u %u\n", 0, UINT_MAX);
  printf("UNSIGNED LONG: %d %lu\n", 0, ULONG_MAX);

  printf("\nSIGNED TYPES\n");
  printf("CHAR: %d %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("SHORT: %d %d\n", SHRT_MIN, SHRT_MAX);
  printf("INT: %d %d\n", INT_MIN, INT_MAX);
  printf("LONG: %ld %ld\n", LONG_MIN, LONG_MAX);

  printf("\nFLOATING-POINT TYPES\n");
  printf("FLOAT: %e %e\n", FLT_MIN, FLT_MAX);
  printf("FLOAT EXPONENTS: %d %d\n", FLT_MIN_EXP, FLT_MAX_EXP);
  printf("DOUBLE: %e %e\n", DBL_MIN, DBL_MAX);
  printf("DOUBLE EXPONENTS: %d %d\n", DBL_MIN_EXP, DBL_MAX_EXP);
  return 0;
}
