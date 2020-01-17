#include <stdio.h>

int mdc(int a, int b){
  while(a != b){
    if(a > b) a -= b;
    else if(b > a) b -= a;
  }
  return a;
}

void reduzir(int *pnum, int *pdenom){
  int m = mdc(*pnum,*pdenom);
  *pnum /= m;
  *pdenom /= m;
}

int main(int argc, char const *argv[]) {
  int a = 25;
  int b = 500;
  reduzir(&a,&b);
  printf("%d/%d\n", a, b);
}
