#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, c, max, min, amp;
  scanf("%d %d %d", &a, &b, &c);

  max = a;
  min = a;

  if(b > max)
    max = b;
  else if(c > max)
    max = c;
  if(b < min)
    min = b;
  else if(c < min)
    min = c;

  amp = max - min;

  printf("max = %d\nmin = %d\namp = %d\n", max, min, amp);
}
