#include <stdio.h>
#include <ctype.h>
#include <string.h>

int todos_letras(char str[]){
  for(int i = 0; i < strlen(str); i++){
    if(!isalpha(str[i])) return 0;
  }
  return 1;
}

int main(int argc, char const *argv[]) {
  char a[] = "guilherme";
  char b[] = "132asd";

  printf("%d\n", todos_letras(a));
  printf("%d\n", todos_letras(b));
}
