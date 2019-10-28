#include <stdio.h>

int prox_bissexto(int ano){
  while(!((ano % 4 == 0 && ano % 100 !=0) || ano % 400 == 0)){
    ano++;
  }
  return ano;
}
int main(int argc, char const *argv[]) {
  int ano;
  scanf("%d", &ano);
  printf("prox_bissexto %d\n", prox_bissexto(ano));
}
