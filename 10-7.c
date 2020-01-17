#include <stdio.h>

int contar_espacos(char *str){
  int espacos = 0;

  while(*str != '\0'){
    if(*str++ == ' ')
      espacos++;
  }
  return espacos;
}

int main(int argc, char const *argv[]) {
  char s[] = " ab";
  printf("%d\n", contar_espacos(s));
}
