#include <stdio.h>

int main(void) {
  int a = !(0);
  int b = 0 || 2;
  int c = 3 && 0 && 6;
  int d = !(1234);
  int e = !!(-1020);


  printf("%d \n%d \n%d \n%d \n%d \n", a, b, c, d, e);

  return 0;
}