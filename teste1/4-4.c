#include <stdio.h>

int main(int argc, char const *argv[]) {
  float val, soma = 0;
  int c = 0;
  scanf("%f", &val);

  while(val != 0){
    soma += val;
    c++;
    scanf("%f", &val);
  }

  printf("Media = %f\n", soma/c);
}
