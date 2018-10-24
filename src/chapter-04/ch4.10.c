#include <stdio.h>

int main(void) {
  unsigned num;

  printf("Insira nº inteiro positivo: ");
  scanf("%u", &num);

  unsigned soma = 0;
  while (num > 0) {
    soma += num % 10;
    num  /= 10;
  }

  printf("Soma dos digitos = %u\n", soma);

  return 0;
}
