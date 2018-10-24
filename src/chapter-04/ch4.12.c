#include <stdio.h>

int main(void) {
  unsigned n;

  printf("Quantos elementos de Fibonacci pretende? (N>=0) ");
  scanf("%u", &n);

  unsigned long fib1 = 0, fib2 = 1, aux;
  for (; n > 0; n--) {
    printf("%lu ", fib2);
    aux   = fib2;
    fib2 += fib1;
    fib1  = aux;
  }

  printf("\n");

  return 0;
}
