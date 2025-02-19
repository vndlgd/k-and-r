#include <stdio.h>
#define LIM 1024

/* Rewrite the following for loop without using && or ||
* for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
*   s[i] = c;
* } 
*/

int main(void) 
{
  int i = 0;
  char s[LIM];

  int c;
  while (i < LIM-1) {
    c = getchar(); // Get char input
    if (c == '\n') break; // Stop if equal to new line
    if (c == EOF) break; // Stop if equal to EOF
    s[i] = c;
    ++i;
  }

  s[i] = '\0'; // Null-terminate the string

  printf("%s\n", s); // Print collected input

  return 0;
}
