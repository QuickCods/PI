#include <stdio.h>
#include <ctype.h>
#include <string.h>

int algum_digito(char str[]){
  for(int i = 0; i < strlen(str); i++){
    if(isdigit(str[i])) return 1;
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  char a[] = "guilherme";
  char b[] = "132asd";

  printf("%d\n", algum_digito(a));
  printf("%d\n", algum_digito(b));
}
