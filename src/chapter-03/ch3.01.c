#include <stdio.h>

int main(void) {
  int ss;

  printf("Tempo em segundos? ");
  scanf("%d", &ss);

  int hh = ss / 3600;
  ss = ss % 3600;
  int mm = ss / 60;
  ss = ss % 60;

  printf("%d:%d:%d.\n", hh, mm, ss);

  return 0;
}
