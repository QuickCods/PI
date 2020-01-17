#include <stdio.h>
#define MAX 100

int ocorre(int vec[], int size, int val){
  for(int i = 0; i < size; i++){
    if(vec[i] == val) return 1;
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int val, vec[MAX], size = 0;

  scanf("%d", &val);
  while(val != -1){
    if(!ocorre(vec,size,val)){
      vec[size++] = val;
    }
    scanf("%d", &val);
  }

  for(int i = 0; i < size; i++){
    printf("%d  ", vec[i]);
  }
  printf("\n");
}
