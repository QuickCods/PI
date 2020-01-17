#include <stdio.h>

int contar_maiores(int vec[], int size, int val){
  int count = 0;
  for(int i = 0; i < size; i++){
    if(vec[i] > val) count++;
  }
  return count;
}

int main(int argc, char const *argv[]) {
  int vec[5] = {1,2,3,5,98};
  printf("%d\n", contar_maiores(vec,5,69));
}
