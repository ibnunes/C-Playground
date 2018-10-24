#include <stdio.h>

int main(void) {
  int n = 0;

  while (n < 2) {
    printf("Quantos nºs para somar? (N>=2): ");
    scanf("%d", &n);
  }

  int a, soma = 0;
  for (int i = 0; i < n; i++) {
    printf("Introduza inteiro nº %d: ", i);
    scanf("%d", &a);
    soma += a;
  }

  printf("A soma dos %d numeros inseridos e' %d.\n", n, soma);

  return 0;
}
