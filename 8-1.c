#include <stdio.h>
#include <string.h>

void eliminar(char str[], char ch){
  int flag = 0;
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == ch){
      for(int j = i; j < strlen(str); j++){
        str[j] = str[j+1];
        flag = 1;
      }
    }
    if(flag == 1) break;
  }
}

int main(int argc, char const *argv[]) {
  char str[] = "ABBBBBA";
  eliminar(str, 'B');
  puts(str);
}
