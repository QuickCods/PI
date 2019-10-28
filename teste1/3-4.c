#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if(a == b && b == c)
    printf("Triangulo equilatero\n");
  else if(a != b && b != c && a != c)
    printf("Triangulo escaleno\n");
  else
    printf("Triangulo isosceles\n");
}
