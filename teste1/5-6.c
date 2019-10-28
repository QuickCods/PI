#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  int count = 0;
  char c1, c2;
  c1 = getchar();

  while((c2 = getchar()) != EOF){
    if(isgraph(c1) && isspace(c2))
      count++;
    c1 = c2;
  }
  printf("%d\n", count);
}
