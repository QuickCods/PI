#include <stdio.h>

int repetidos(int vec[], unsigned size){
  for(int i = 0; i < size; i++){
    for(int j = i+1; j < size; j++){
      if(vec[j] == vec[i]) return 1;
    }
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int a[5] = { 2, -1, 0, 2, -1 };
  int b[5] = { 3, 4, 1, 2, -1 };
  printf("%d\n", repetidos(a, 5)); // imprime 1
  printf("%d\n", repetidos(b, 5)); // imprime 0
}
