#include <stdio.h>
#define iva 1.23

int main(int argc, char const *argv[]) {
  float value;
  scanf("%f", &value);

  printf("Valor com iva = %.3f\n", value*iva);
}
