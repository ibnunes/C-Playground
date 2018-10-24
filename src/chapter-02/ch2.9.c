#include <stdio.h>

int main(void) {
  float kg;

  printf("Peso em quilogramas? ");
  scanf("%f", &kg);

  float g = kg * 1000.0;

  printf("%f quilogramas sao %f gramas.\n", kg, g);

  return 0;
}
