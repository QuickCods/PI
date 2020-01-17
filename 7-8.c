#include <stdio.h>
#include <string.h>
#include <ctype.h>

int scrabble(char str[]){
  int pontos = 0;

  for(int i = 0; i < strlen(str); i++){
    switch(toupper(str[i])){
      case 'D':
      case 'G': pontos += 2;
      break;

      case 'B':
      case 'C':
      case 'M':
      case 'P': pontos += 3;
      break;

      case 'F':
      case 'H':
      case 'V':
      case 'W':
      case 'Y': pontos += 4;
      break;

      case 'K': pontos += 5;
      break;

      case 'J':
      case 'X': pontos += 8;
      break;

      case 'Q':
      case 'Z': pontos += 10;
      break;

      default: pontos += 1;
    }
  }
  return pontos;
}

int main(int argc, char const *argv[]) {
  printf("PITFALL: %d\n", scrabble("pitfall"));
}
