#include <stdio.h>

char *procurar(char *str, char ch){
  while(*str != '\0'){
    if(*str++ == ch) return str;
  }
  return NULL;
}

int main(int argc, char const *argv[]) {
  return 0;
}
