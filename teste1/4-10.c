#include <stdio.h>

float raiz(int a, int n){
  float x0, xn, xn1;

  x0 = a/2;
  xn = (x0 + a/x0)*0.5;

  for(int i = 1; i <= n; i++){
    xn1 = (xn + a/xn)*0.5;
    xn = xn1;
  }
  return xn;
}

int main(int argc, char const *argv[]) {
  int a, n;
  scanf("%d %d", &a, &n);

  printf("%f\n", raiz(a,n));
}
