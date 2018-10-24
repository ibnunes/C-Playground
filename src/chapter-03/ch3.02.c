#include <stdio.h>

int main(void) {
  float n;

  printf("Introduza numero: ");
  scanf("%f", &n);

  int i = (int)n;
  float f = n - i;

  printf("A parte inteira e' %d e a fraccionaria e' %f.\n", i, f);

  return 0;
}
