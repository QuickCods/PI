#include <stdio.h>
#include <string.h>

int montanhas(char str[]){
  int count = 0, montanhas = 0;

  for(int i = 0; i < strlen(str); i++){
    if(str[i] == 'S') count++;
    if(str[i] == 'D') count--;
    if(count == 0 && str[i] == 'D') montanhas++;
  }
  return montanhas;
}

int main(int argc, char const *argv[]) {
  char str[] = "SSDSDDSDDDSS";
  printf("%d\n", montanhas(str));
}
