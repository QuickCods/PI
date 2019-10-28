#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, c, dist = 1;
  scanf("%d %d %d", &a, &b, &c);

  if(b != a)
    dist++;
  if(c != b && c != a)
    dist++;

  printf("%d valores distintos\n", dist);
}
