#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, c, mediana;
  scanf("%d %d %d", &a, &b, &c);

  if(b >= a && b <= c)
    mediana = b;
  else if(a >= b && a <= c)
    mediana = a;
  else
    mediana = c;

  printf("Mediana = %d\n", mediana);
}
