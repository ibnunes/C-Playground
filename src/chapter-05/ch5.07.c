#include <stdio.h>

void quadrado(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n+i-1; j++) {
      printf("%4d ", j);
    }
    printf("\n");
  }
}

int main(void) {
  unsigned short n;

  printf("Tamanho do quadrado? ");
  scanf("%hu", &n);

  quadrado(n);

  return 0;
}
