#include <stdio.h>

void store_zeros(int *vec){
  while(*vec != '\0'){
    *vec++ = 0;
  }
}

int main(int argc, char const *argv[]) {
  int a[5] = {5};
  store_zeros(a);
  for(int i = 0; i < 5; i++){
    printf("%d\t", a[i]);
  }
  printf("\n");
}
