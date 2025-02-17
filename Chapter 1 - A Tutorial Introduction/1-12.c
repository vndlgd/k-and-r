#include <stdio.h>

int main(void) {

  int ns = 0; // new space
  int nt = 0; // new tab

  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (ns >= 1) {
        // do nothing
        c = '\b';
      } else {
        c = '\n';
      }
      ++ns;
    } else if (c == '\t') {
      if (nt >= 1) {
        // do nothing
        c = '\b';
      } else {
        c= '\n';
      }
      ++nt;
    } else {
      ns = 0;
      nt = 0;
    }
    putchar(c);
  }
  return 0;
}
