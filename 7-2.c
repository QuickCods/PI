#include <stdio.h>
#include <ctype.h>
#include <string.h>

int palindromo(char str[]){
  int j = strlen(str) - 1;
  for(int i = 0; i < j; i++){
    if(toupper(str[i]) != toupper(str[j]))
      return 1;
    j--;
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  char a[] = "palindromo";
  char b[] = "Ana";

  printf("%d\n", palindromo(a));
  printf("%d\n", palindromo(b));
}
