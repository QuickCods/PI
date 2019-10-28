#include <stdio.h>

int main(int argc, char const *argv[]) {
  int val, max = 0;
  scanf("%d", &val);

  while(val != 0){
    if(val > max)
      max = val;
    scanf("%d", &val);
  }

  printf("Max = %d\n", max);
}
