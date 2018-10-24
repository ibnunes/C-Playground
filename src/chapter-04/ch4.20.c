#include <stdio.h>

int main(void) {
  unsigned short int n;

  do {
    printf("Insira tamanho do triangulo de numero (N>=2): ");
    scanf("%hu", &n);
  } while (n < 2);

  for (int y = 1; y <= n; y++) {
    for (int x = 1; x <= n - y; x++)
      printf("   ");
    for (int x = 1; x <= y; x++)
      printf("%2d ", x);
    for (int x = y-1; x >= 1; x--)
      printf("%2d ", x);
    printf("\n");
  }

  return 0;
}
