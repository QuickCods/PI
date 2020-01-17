#include <stdio.h>

void select_sort(int vec[], int n){
  int i, j, iter = 0;
  while(iter != 2){
    for(i = 0; i < n; i++) {
      int imin = i; // índice inicial do mínimo
      for(j = i+1; j < n; j++) {
        if(vec[j] < vec[imin]){
          imin = j;
        }
      }
      // trocar o mínimo com vec[i]
      if(imin != i){
        int temp = vec[i];
        vec[i] = vec[imin];
        vec[imin] = temp;
      }
    }
    iter++;
  }
}

int segundo_menor(int vec[], int n){
  select_sort(vec, n);
  return vec[1];
}

int main(int argc, char const *argv[]) {
  int vec[] = {5,9,6,48,1};
  printf("%d\n", segundo_menor(vec,5));
}
