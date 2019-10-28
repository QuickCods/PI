#include <stdio.h>

int mdc(int a, int b){
  while(a != b){
    if(a > b)
      a -= b;
    else
      b -= a;
  }
  /*
    int t;
    while(b != 0){
      t = a%b;
      a = b;
      b = t;
    }
  */
  return a;
}

int main(int argc, char const *argv[]) {
  int a, b;
  scanf("%d %d", &a, &b);

  printf("%d/%d = %d/%d\n", a, b, a/(mdc(a,b)), b/(mdc(a,b)));
}
