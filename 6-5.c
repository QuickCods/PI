#include <stdio.h>

int ocorre(int vec[], int size, int val){
  for(int i = 0; i < size; i++){
    if(vec[i] == val) return 1;
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int a[5] = {1,2,3,4,5};
  int ocorreu = ocorre(a,5,3);
  printf("%d\n", ocorreu);
}
