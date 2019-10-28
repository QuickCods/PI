#include <stdio.h>

int mediana(int a, int b, int c){
  int t;

  while (!(a <= b && b <= c)) {
    if(a > b){
      t = a;
      a = b;
      b = a;
    }
    else if(b > c){
      t = b;
      b = c;
      c = b;
    }
  }
  return b;
}

int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  printf("Mediana: %d\n", mediana(a, b, c));
}
