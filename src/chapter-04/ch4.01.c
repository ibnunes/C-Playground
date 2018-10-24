#include <stdio.h>

int main(void) {
  int n;

  printf("Introduza numero inteiro: ");
  scanf("%d", &n);

  printf("O numero e' ");
  if (n % 2 == 0)
    printf("par.\n");
  else
    printf("impar.\n");

  return 0;
}
