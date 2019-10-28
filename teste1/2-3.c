#include <stdio.h>
#define pi 3.14159

int main(int argc, char const *argv[]) {
  float r, v;
  scanf("%f", &r);

  v = (4*pi*r*r*r)/3;

  printf("Volume da esfera = %f\n", v);
}
