#include <stdio.h>

int main(void) {
  int n1 = 0, n2 = 0;

  do {
    printf("Insira 'N1 N2': ");
    scanf("%d %d", &n1, &n2);
    if (n2 < n1)
      printf("ERRO! N2 deve ser maior que N1!\n");
  } while (n2 < n1);

  long prod = 1;
  for (int i = n1; i <= n2; i++)
    prod *= i;

  printf("O produto entre %d e %d e' %ld.\n", n1, n2, prod);

  return 0;
}
