#include <stdio.h>

int par(int n) {
  return (n % 2 == 0);
}

int main(void) {
  int n;

  printf("Insira um numero inteiro: ");
  scanf("%d", &n);

  if (par(n))
    printf("E' par.\n");
  else
    printf("Nao e' par.\n");

  return 0;
}
