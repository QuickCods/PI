#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int forte(char str[]){
  int upper = 0, lower = 0, digit = 0;

  if(strlen(str) < 6) return false;

  for(int i = 0; i < strlen(str); i++){
    if(isdigit(str[i])) digit++;
    else if(isupper(str[i])) upper++;
    else if(islower(str[i])) lower++;
  }
  if(upper > 0 && lower > 0 && digit > 0) return true;
  return false;
}

int main(int argc, char const *argv[]) {
  char a[] = "Abr4cadabra";
  char b[] = "Apric0t";
  char c[] = "Ub40";
  char d[] = "POLICE";

  printf("%d\n", forte(a));
  printf("%d\n", forte(b));
  printf("%d\n", forte(c));
  printf("%d\n", forte(d));
}
