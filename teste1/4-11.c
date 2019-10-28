#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x;
  scanf("%d", &x);
  printf("%d: ", x);

  for(int i = 2; i <= x; i++){
    while(x % i == 0){
      printf("%d  ", i);
      x /= i;
    }
  }
  printf("\n");
}
