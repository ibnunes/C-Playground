#include <stdio.h>

int main(void) {
  unsigned short b, l, a;

  do {
    printf("Insira 'BASE LARGURA ALTURA': ");
    scanf("%hu %hu %hu", &b, &l, &a);
  } while( !( (b % 2 != 0) && (b >= 3) &&
              (l % 2 != 0) && (l >= 1) && (l <= b / 2) &&
              (a >= 2) && (a <= b / 2) ) );

  for (int y = 1; y <= b / 2 + 1; y++) {
    for (int x = 1; x <= b / 2 - y + 1; x++)
      printf(" ");
    for (int x = 1; x <= 2 * y - 1; x++)
      printf("*");
    printf("\n");
  }

  for (int y = 1; y <= a; y++) {
    for (int x = 1; x <= b / 2 - l / 2; x++)
      printf(" ");
    for (int x = 1; x <= l; x++)
      printf("*");
    printf("\n");
  }

  return 0;
}
