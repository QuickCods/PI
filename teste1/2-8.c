#include <stdio.h>

int main(int argc, char const *argv[]) {
  float x, res, res2;
  scanf("%f", &x);

  res = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
  res2 = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;

  printf("%f\n", res);
  printf("%f\n", res2);
}
