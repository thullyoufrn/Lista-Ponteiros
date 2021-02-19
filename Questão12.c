#include <stdio.h>

int fun(int x) {
  return x + 10;
}

int main(void) {

int (*p) (int) = fun;
printf("%d", p(5));

  return 0;
}