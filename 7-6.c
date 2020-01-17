#include <stdio.h>
#include <string.h>

int decimal(char str[]){
  int dec = 0, x10 = 1;
  for(int i = strlen(str)-1; i >= 0; i--){
    dec += (str[i] - '0') * x10;
    x10 *= 10;
  }
  return dec;
}

int main(int argc, char const *argv[]) {
  printf("%d\n", decimal("1234"));
}
