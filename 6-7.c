#include <stdio.h>
#include <ctype.h>
#define MAX 100

void contar_letras(char str[], int size){
  int contador[26];
  char alpha[26];

  for(int i = 0; i < 26; i++){
    alpha[i] = 'A' + i;
  }

  for(int letra = 0; letra < 26; letra++){
    int n = 0;
    for(int j = 0; j < size; j++){
      if(alpha[letra] == str[j]){
        n++;
      }
    }
    contador[letra] = n;
  }

  for(int i = 0; i < 26; i++){
		if(i % 5 == 0)
			printf("\n");
		printf("%c: %d\t", alpha[i], contador[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[]) {
  char texto[MAX];
  int c = 0;
  while ((texto[c] = toupper(getchar())) != EOF){
    c++;
  }
  contar_letras(texto, c-1);
}
