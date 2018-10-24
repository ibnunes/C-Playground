#include <stdio.h>

int main(void) {
  float fahr;

  printf("Introduza temperatura em Fahreneit: ");
  scanf("%f", &fahr);

  float cels = (fahr - 32) * 5.0/9;

  printf("Isso sao %f Celsius.\n", cels);

  return 0;
}
