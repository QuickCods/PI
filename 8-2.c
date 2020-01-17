#include <stdio.h>
#include <stdbool.h>

int ordenada(int vec[], int size){
  for(int i = 0; i < size-1; i++){
    if(!(vec[i] <= vec[i+1])) return false;
  }
  return true;
}

int main(int argc, char const *argv[]) {
  int vec1[5] = {1,3,3,5,6};
  int vec2[5] = {1,3,2,5,6};

  printf("%d\n", ordenada(vec1,5));
  printf("%d\n", ordenada(vec2,5));
}
