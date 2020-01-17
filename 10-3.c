#include <stdio.h>

void decompor(int segundos, int *horas, int *mins, int *segs){
  *horas = segundos / 3600;
  *mins = (segundos - (*horas * 3600)) / 60;
  *segs = segundos - (*horas * 3600) - (*mins * 60);
}

int main(int argc, char const *argv[]) {
  int horas, mins, segs;
  int segundos = 13245;

  decompor(segundos,&horas,&mins,&segs);

  printf("%d segundos: %d:%d:%d\n", segundos, horas, mins, segs);
}
