#include <stdio.h>

void select_sort(int vec[], int n){
  int i, j;
  for(i = 0; i < n; i++) {
    int imax = i; // índice inicial do maximo
    for(j = i+1; j < n; j++) {
      if(vec[j] > vec[imax]){
        imax = j;
      }
    }
    // trocar o maximo com vec[i]
    if(imax != i) {
      int temp = vec[i];
      vec[i] = vec[imax];
      vec[imax] = temp;
    }
  }
}

int main(int argc, char const *argv[]) {
  int vec[] = {3,2,1,3,5};
  select_sort(vec,5);
  for(int i = 0; i < 5; i++){
    printf("%d  ", vec[i]);
  }
  printf("\n");
}
