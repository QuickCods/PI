#include <stdio.h>
#include <math.h>

double aprox_raiz(int n){
  double soma = 0;
  for(int i = 0; i < n; i++){
    if(i % 2 == 0){
      soma += (double)1/(double)(2*i+1);
    }
    else
      soma -= (double)1/(double)(2*i+1);
  }
  return 4*soma;
}

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);
  printf("Funcao: %.10lf\nM_PI: %.10lf\n", aprox_raiz(n), M_PI);
}
