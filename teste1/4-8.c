#include <stdio.h>

int main(int argc, char const *argv[]) {
  int dec, bin = 0, t, x10 = 1;
  scanf("%d", &dec);

  while(dec != 0){
    t = dec % 2;
    dec /= 2;
    bin += t * x10;
    x10 *= 10;
  }

  printf("%d\n", bin);
}
