#include <stdio.h>
#include <string.h>

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

int main(int argc, char const *argv[]) {
  char str[] = "ALGORITMO";
  ordenar(str);
  puts(str);
}
