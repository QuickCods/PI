#include <stdio.h>
#include <stdbool.h>
#define N 4

int identidade(int mat[N][N]){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(i == j){
        if(mat[i][j] != 1) return false;
      }
      else{
        if(mat[i][j] != 0) return false;
      }
    }
  }
  return true;
}

int main(int argc, char const *argv[]) {
  int a[N][N] = {1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};
  int b[N][N] = {0};
  printf("%d\n", identidade(a));
  printf("%d\n", identidade(b));
}
