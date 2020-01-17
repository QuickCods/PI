#include <stdio.h>
#include <stdbool.h>

int comparar(char *str1, char *str2){
  while(*str1 != '\0'){
    if(*str1++ != *str2++) return false;
  }
  return true;
}

int main(int argc, char const *argv[]) {
  char a[] = "caralho";
  char b[] = "caralho";
  char c[] = "baralho";

  printf("a v. b = %d\n", comparar(a,b));
  printf("b v. c = %d\n", comparar(b,c));
}
