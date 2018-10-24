#include <stdio.h>

int main(void) {
  int n;

  do {
    printf("Nºs a introduzir (N>=2): ");
    scanf("%d", &n);
  } while (n < 2);

  int a, count = 0, soma = 0;
  for (int i = 0; i < n; i++) {
    printf("Introduza nº (#%d): ", i);
    scanf("%d", &a);
    soma += a;
    count++;
  }

  printf("Media aritmetica = %f\n", (float)soma / count);

  return 0;
}
