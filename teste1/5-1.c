#include <stdio.h>
#define TRUE 1
#define FALSE 0

int primo(int x){
  if(x <= 1)
    return FALSE;
  for(int i = 2; i*i <= x; i++){
    if(x % i == 0)
      return FALSE;
  }
  return TRUE;
}

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);

  for(int i = 2; i <= n; i++){
    if(primo(i))
      printf("%d ", i);
  }
  printf("\n");
}
