#include <stdio.h>
#include <stdbool.h>
#define N 3

int magico(int a[20][20], int n){
  int ref = 0;
  for(int i = 0; i < n; i++){   // referencia da primeira linha
    ref += a[i][0];
  }

  for(int i = 1; i < n; i++){    // resto das linhas
    int linha = 0;
    for(int j = 0; j < n; j++){
      linha += a[i][j];
    }
    if(linha != ref) return false;
  }

  for(int i = 0; i < n; i++){    // colunas
    int coluna = 0;
    for(int j = 0; j < n; j++){
      coluna += a[j][i];
    }
    if(coluna != ref) return false;
  }

  int diag1 = 0, diag2 = 0;

  for(int i = 0; i < n; i++){   // diagonal principal
    diag1 += a[i][i];
  }

  if(diag1 != ref) return false;

  for(int i = 0; i < n; i++){   // diagonal secundaria
    for(int j = 0; j < n; j++){
      if(i+j == N-1){
        diag2 += a[i][j];
      }
    }
  }

  if(diag2 != ref) return false;
  return true;
}

int main(int argc, char const *argv[]) {
  int cubo[20][20] = {{2,7,6},{9,5,1},{4,3,8}};

  printf("%d\n", magico(cubo,3));
}
