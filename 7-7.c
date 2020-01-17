#include <stdio.h>
#include <string.h>

int calc(char str[]){
  int a = str[0] - '0';
  int b = str[2] - '0';

  switch(str[1]){
    case '*': return a*b;
      break;
    case '-': return a-b;
      break;
    default: return a+b;
  }
}

int main(int argc, char const *argv[]) {
  printf("%d\n", calc("5-3"));
  printf("%d\n", calc("6*6"));
  printf("%d\n", calc("6+9"));
}
