#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned int my_htoi(char *s);

int main()
{
  printf("TEST CASES\n");
  printf("Expected: 16, Got: %u\n", my_htoi("0x10")); // should equal 16
  printf("Expected: 32, Got: %u\n", my_htoi("0x20")); // should equal 32
  printf("Expected: 256, Got: %u\n", my_htoi("0X100")); // should equal 256 
  printf("Expected: 0, Got:  %u\n", my_htoi("0x00")); // should equal 0
  printf("Expected: 255, Got: %u\n", my_htoi("0XFF")); // should equal 255
  printf("Expected: 255, Got: %u\n", my_htoi("0xff")); // should equal 255
  printf("Expected: 8, Got: %u\n", my_htoi("08")); // should equal 8
  printf("Expected: 4294967295, Got: %u\n", my_htoi("0xFFFFFFFF"));

	return 0;
}

unsigned int my_htoi(char *s)
{
  unsigned int sum = 0;
  int len = strlen(s);
  int stop = 0;

  if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
    stop = 2;
  }

  unsigned int power = 1;  
  for (int i = len - 1; i >= stop; --i) {
    int current_digit = 0;
    if (s[i] >= 'A' && s[i] <= 'F') {
      current_digit = (s[i] - 'A' + 10); 
    } else if (s[i] >= 'a' && s[i] <= 'f') {
      current_digit = (s[i] - 'a' + 10); 
    } else if (s[i] >= '0' && s[i] <= '9') {
      current_digit = (s[i] - '0'); 
    } else { 
      return 0; // exit if input is invalid 
    }
  
    sum += current_digit * power;
    power *= 16; // update power for next iteration
  }

  return sum;
}
