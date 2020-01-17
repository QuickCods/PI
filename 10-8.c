#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1000

void inverter(char *str){
  int i = strlen(str) - 1;
  char *j = str + i;
  while(str < j){
    char t = *str;
    *str = *j;
    *j = t;
    str++;
    j--;
  }
}

int main(void) {
  char text[MAX_SIZE];

  fgets(text, MAX_SIZE, stdin);
  puts(text);
  inverter(text);
  puts(text);
}
