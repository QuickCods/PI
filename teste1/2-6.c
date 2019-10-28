#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, c, d, num, den;

  scanf("%d %d %d %d", &a, &b, &c, &d);

  num = a*d + c*b;
  den = b*d;

  printf("%d/%d + %d/%d = %d/%d\n", a, b, c, d, num, den);
}
