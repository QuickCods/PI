#include <stdio.h>

int soma_divisores(int n){
  int soma = 0;
  for(int i = 1; i <= n/2; i++){
    if(n%i == 0)
      soma += i;
  }
  return soma;
}

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);
  printf("%d\n", soma_divisores(n));
}
