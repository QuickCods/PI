#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n20, n10, n5, m1, value;

  scanf("%d", &value);

  n20 = value/20;
  n10 = (value%20)/10;
  n5 = ((value%20)%10)/5;
  m1 = ((value%20)%10)%5;

  printf("notas 20€: %d\nnotas 10€: %d\nnotas 5€: %d\nmoedas 1€: %d\n", n20, n10, n5, m1);
}
