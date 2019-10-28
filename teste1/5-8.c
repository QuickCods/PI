#include <stdio.h>

double serie_log(double x, int n){
  double soma = 0, potencia = 1;
  for(int i = 1; i <= n; i++){
    potencia *= x;
    if(i % 2 == 0){
      soma -= potencia/i;
    }
    else
      soma += potencia/i;
  }
  return soma;
}

int main(int argc, char const *argv[]) {
  double x;
  int n;
  scanf("%lf", &x);
  scanf("%d", &n);

  printf("%lf\n", serie_log(x,n));
}
