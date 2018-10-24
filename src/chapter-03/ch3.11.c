#include <stdio.h>

int main(void) {
  int a, b;

  printf("Introduza A: ");
  scanf("%d", &a);
  printf("Introduza B: ");
  scanf("%d", &b);

  int max = (a > b) ? a : b;

  printf("O maximo e' %d.\n", max);

  return 0;
}
