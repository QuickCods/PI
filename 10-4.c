#include <stdio.h>

void max_min(int vec[], int size, int *pmax, int *pmin){
  *pmax = vec[0];
  *pmin = vec[0];

  for(int i = 1; i < size; i++){
    if(vec[i] > *pmax) *pmax = vec[i];
    if(vec[i] < *pmin) *pmin = vec[i];
  }
}

int main(int argc, char const *argv[]) {
  int vec[] = {45,42,37,69};
  int max, min;
  max_min(vec,4,&max,&min);
  printf("Max = %d\nMin = %d\n", max, min);
}
