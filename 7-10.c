#include <stdio.h>

int filtrar_positivos(int vec[], int size){
  int positivos = 0;
  for(int i = 0; i < size; i++){
    if(vec[i] > 0){
      vec[positivos++] = vec[i];
    }
  }
  return positivos;
}

int main(int argc, char const *argv[]) {
  int vec[10] = {5,3,6,-1,4,7,-15,98,-614,9};
  printf("%d\n", filtrar_positivos(vec,10));
}
