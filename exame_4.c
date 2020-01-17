#include <stdio.h>

void bubblesort(int vec[], int n){
  for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n - 1 - i; j++){
      if(vec[j] > vec[j+1]){
        int t = vec[j];
        vec[j] = vec[j+1];
        vec[j+1] = t;
      }
    }
  }
}
