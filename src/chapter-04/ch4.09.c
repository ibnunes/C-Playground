#include <stdio.h>

int main(void) {
  int count = 1, num, soma = 0;

  do {
    printf("Introduza nº (#%d): ", count);
    scanf("%d", &num);
    if ((num == 0) && (count <= 2))
      continue;
    if (num != 0) {
      soma += num;
      count++;
    }
  } while ((count <= 2) || (num != 0));
  count--;

  printf("Foram inseridos %d numeros:\nMedia aritmetica = %f\n", count, (float)soma / count);

  return 0;
}
