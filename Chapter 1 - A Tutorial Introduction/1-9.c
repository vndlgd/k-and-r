#include <stdio.h>

// copy its input to its output, replacing each string of one or more blanks with a single blank

int main(void) {
  long nb; // blank char counter

  int c;

  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      nb = 0;
    }

    if (c == ' ') {
      ++nb;
    }

    if (nb > 1) {
      // do nothing
    } else {
      putchar(c);
    }
  }

  return 0;
}
