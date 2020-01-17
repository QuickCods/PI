#include <stdio.h>

char rodar_letra(char ch){
  if(ch >= 'A' && ch <= 'Y')
    return ch + 1;
  else if(ch >= 'a' && ch <= 'y')
    return ch + 1;
  else if(ch == 'Z' || ch == 'z')
    return ch -= 'Z' - 'A';         // 25
}

int main(void){

	char ch;
	printf("Escreva o texto:\n");
	while ((ch = getchar()) != '\n')
		putchar(rodar_letra(ch));
	printf("\n");

	return 0;
}
