#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalizar(char str[]){
  for(int i = 0; i < strlen(str); i++){
    str[i] = toupper(str[i]);
  }
}

int main(int argc, char const *argv[]) {
  char str[] = "gu1lh3rm3";
  capitalizar(str);
  puts(str);
}
