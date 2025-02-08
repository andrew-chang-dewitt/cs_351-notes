#include <stdio.h>
#include <limits.h>

int main(void) {
  long long a;
  a = (1 << 64) - 1; // this overflows, so we actually
                     // get a wrong answer
  printf("ERROR: long long max == %d\n", a);

  // the idiomatic way:
  // FIXME: come back and add this here...
  long long b = INT64_MAX;
  printf("FIXED: long long max == %d\n", b);

  return 0;
}