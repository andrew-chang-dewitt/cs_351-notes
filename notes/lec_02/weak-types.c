#include <stdio.h>

int main(void) {
  char         c = 0x41424344;
  short        s = 0x10001000;
  int          i = 'A';
  unsigned int u = -1;

  printf("'%c', %d, %X, %X\n", c, s, i, u);

  return 0;
}