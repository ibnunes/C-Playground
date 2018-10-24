#include <stdio.h>

void escreveCaracter(char c, int n) {
  for (; n > 0; n--)
    printf("%c", c);
}

void escreveNumerosAsc(int min, int max) {
  for (int i = min; i <= max; i++)
    printf("%2d ", i);
}

void escreveNumerosDesc(int max, int min) {
  for (int i = max; i >= min; i--) {
    printf("%2d ", i);
  }
}

int main(void) {
  unsigned short n;

  do {
    printf("Insira tamanho do triangulo de numero (N>=2): ");
    scanf("%hu", &n);
  } while (n < 2);

  for (int y = 1; y <= n; y++) {
    escreveCaracter(' ', 3 * (n - y));
    escreveNumerosAsc(1, y);
    escreveNumerosDesc(y - 1, 1);
    printf("\n");
  }

  return 0;
}
