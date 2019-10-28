#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  char c;
  int count = 0;

  while((c = getchar()) != '\n'){
    if(isalpha(c)){
      count++;
    }
  }
  printf("Contem %d letras\n", count);
}
