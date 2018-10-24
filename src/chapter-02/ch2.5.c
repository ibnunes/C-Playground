#include <stdio.h>

int main(void) {
  int inteiro;
  float real;

  printf("Boa tarde!\nIntroduza um numero inteiro: ");
  scanf("%d", &inteiro);
  printf("Introduza um numero real: ");
  scanf("%f", &real);

  float produto = inteiro * real;

  printf("O produto %d x %f = %f.\n", inteiro, real, produto);

  return 0;
}
