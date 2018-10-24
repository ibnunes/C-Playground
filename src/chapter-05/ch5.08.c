#include <stdio.h>

void escreveCaracter(char c, int n) {
  for (; n > 0; n--)
    printf("%c", c);
}

int main(void) {
  unsigned short int b, l, a;

  do {
    printf("Insira 'BASE LARGURA ALTURA': ");
    scanf("%hu %hu %hu", &b, &l, &a);
  } while( !( (b % 2 != 0) && (b >= 3) &&
              (l % 2 != 0) && (l >= 1) && (l <= b / 2) &&
              (a >= 2) && (a <= b / 2) ) );

  for (int y = 1; y <= b / 2 + 1; y++) {
    escreveCaracter(' ', b / 2 - y + 1);
    escreveCaracter('*', 2 * y - 1);
    printf("\n");
  }

  for (int y = 1; y <= a; y++) {
    escreveCaracter(' ', b / 2 - l / 2);
    escreveCaracter('*', l);
    printf("\n");
  }

  return 0;
}
