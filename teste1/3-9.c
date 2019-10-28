#include <stdio.h>

int potencia(int x, int n){
  int res = 1;
  for(int i = 0; i < n; i++){
    res *= x;
  }
  return res;
}

int main(int argc, char const *argv[]) {
  int x, n;
  scanf("%d %d", &x, &n);

  printf("%d\n", potencia(x,n));
}
