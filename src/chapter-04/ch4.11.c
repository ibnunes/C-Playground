#include <stdio.h>

int main(void) {
  unsigned n;

  printf("Insira nº >=0: ");
  scanf("%u", &n);

  unsigned long fact = 1;
  for (unsigned i = 1; i <= n; i++)
    fact *= i;

  printf("%u! = %lu\n", n, fact);

  return 0;
}
