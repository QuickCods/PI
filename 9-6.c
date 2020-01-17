#include <stdio.h>
#include <stdbool.h>
#define N 3

int soma_diagonal1(int mat[N][N]){
  int soma1 = 0;
  for(int i = 0; i < N; i++){
    soma1 += mat[i][i];
  }
  return soma1;
}

int soma_diagonal2(int mat[N][N]){
  int soma2 = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(i+j == N-1){
        soma2 += mat[i][j];
      }
    }
  }
  return soma2;
}

int main(int argc, char const *argv[]) {
  int a[N][N] = {5,9,4,3,2,5,4,7,5};
  printf("soma_diagonal1 = %d\n", soma_diagonal1(a));
  printf("soma_diagonal2 = %d\n", soma_diagonal2(a));
}
