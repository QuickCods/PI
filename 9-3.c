#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void ordenar(char vec[]){                 //bubble_sort
	for(int i = 0; i < strlen(vec) - 1; i++){
		for(int j = 0; j < strlen(vec) - i - 1; j++){
			if(vec[j] > vec[j+1]){
				int temp = vec[j];
				vec[j] = vec[j+1];
				vec[j+1] = temp;
			}
		}
	}
}

void normalizar(char str[]){
	for(int i = 0; i < strlen(str); i++){
		str[i] = tolower(str[i]);
		if(!(isalpha(str[i]))){
			for(int j = i; j < strlen(str); j++){
					int temp = str[j];
					str[j] = str[j+1];
					str[j+1] = temp;
			}
		}
	}
}

int anagramas(char str1[], char str2[]){
	normalizar(str1);
	normalizar(str2);
	ordenar(str1);
	ordenar(str2);

	if(strlen(str1) != strlen(str2)) return false;

	for(int i = 0; i < strlen(str1); i++){
		if(str1[i] != str2[i]) return false;
	}
	return true;
}

int main(int argc, char const *argv[]) {
	char str1[] = "Quid est veritas?";
	char str2[] = "Est vir qui adest";

	printf("%d\n", anagramas(str1,str2));
}
