#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, ite = 0;
  scanf("%d %d", &a, &b);
  printf("mdc(%d,%d) = ", a, b);

  while(a != b){
    if(a > b){
      a -= b;
      printf("mdc(%d,%d) = ", a, b);
    }
    else{
      b -= a;
      printf("mdc(%d,%d) = ", a, b);
    }
    ite++;
  }
  printf("%d\n", a);
  ite++;
  printf("%d iterações\n", ite);
}
