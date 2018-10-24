#include <stdio.h>

float media(int n) {
  int soma = 0, num;

  for (int i = 1; i <= n; i++) {
    printf("Numero %d: ", i);
    scanf("%d", &num);
    soma += num;
  }

  return (float)soma / n;
}

int main(void) {
  int n;

  printf("Quantos valores? ");
  scanf("%d", &n);

  float m = media(n);

  printf("Media = %f\n", m);

  return 0;
}
