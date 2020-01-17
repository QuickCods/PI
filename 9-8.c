#include <stdio.h>
#include <assert.h>
#define N 50

void gerar(int a[N][N], int n){
  assert(n % 2 == 1 && n >= 1);

  int i = 0;
  int j = (n-1)/2;

  for(int p = 1; p <= n*n; p++){
    int ni, nj;

    a[i][j] = p;

    ni = i - 1;
    nj = j + 1;

    if(ni < 0) ni = n - 1;
    if(nj > n-1) nj = 0;

    if(a[ni][nj] != 0){
      ni = i + 1;
      nj = j;
      if(ni > n-1) ni = 0;
    }

    i = ni;
    j = nj;
  }
}

void imprimir(int a[N][N], int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
}

int main(int argc, char const *argv[]) {
  for(int n = 3; n <= 9; n+=2){
    int a[N][N] = {0};
    gerar(a,n);
    imprimir(a,n);
    printf("\n"); printf("\n");
  }
}
