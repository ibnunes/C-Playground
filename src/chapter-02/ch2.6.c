#include <stdio.h>

int main(void) {
  float l, h;

  printf("AREA DO RECTANGULO\nComprimento? ");
  scanf("%f", &l);
  printf("Altura? ");
  scanf("%f", &h);

  float area = l * h;

  printf("A area do rectangulo e: %f.\n", area);

  return 0;
}
