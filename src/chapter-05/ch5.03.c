#include <stdio.h>

int maior(int a, int b) {
  return (a > b) ? a : b;
}

int main(void) {
  int a, b, c;

  printf("Insira 3 numeros como 'A B C': ");
  scanf("%d %d %d", &a, &b, &c);

  printf("O maior e' %d.\n", maior(maior(a, b), maior(a, c)));
  return 0;
}
