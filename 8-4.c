#include <stdio.h>
#define MAX 100

void insert_sort(int vec[], int n) {
  int i, j;

  for(i = 1; i < n; i++) {
    int x = vec[i];
    j = i-1;
    while(j>=0 && vec[j] > x) {
      vec[j+1] = vec[j];
      j--;
    }
    vec[j+1] = x;
  }
}

int main(int argc, char const *argv[]) {
  int vec[MAX], size = 0, num;
  scanf("%d", &num);
  while(num != 0){
    vec[size++] = num;
    scanf("%d", &num);
  }
  insert_sort(vec, size);

  for(int i = 0; i < size; i++){
    printf("%d  ", vec[i]);
  }
  printf("\n");
}
