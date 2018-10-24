#include <stdio.h>

int main(void) {
  int nota1, nota2;

  printf("Primeira nota: ");
  scanf("%d", &nota1);
  printf("Segunda nota: ");
  scanf("%d", &nota2);

  float media = (nota1 + nota2) / 2.0;

  printf("A media e' %f.\n", media);

  return 0;
}
