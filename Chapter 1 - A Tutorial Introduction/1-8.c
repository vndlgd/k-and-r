#include <stdio.h>

int main() 
{
  int nb = 0; // blanks char counter
  int nt = 0; // tab counter
  int nl = 0; // new line counter

  int c;

  for (int i = 0; (c = getchar()) != EOF; ++i) {
    if (c == ' ') {
      ++nb;
    } 
    if (c == '\t') {
      ++nt;
    }
    if (c == '\n') {
      ++nl;
    }
  }
 
  printf("Number of blanks: %d\n", nb);
  printf("Number of tabs: %d\n", nt);
  printf("Number of newlines: %d\n", nl);

  return 0;
}
