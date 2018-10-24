#include <stdio.h>

int main(void) {
  int n;

  printf("Introduza um numero de 3 digitos: ");
  scanf("%d", &n);  // Há formas de "cortar" o número para só ter 3 dígitos, mas ainda não foi leccionado.

  /*
    ATENÇÃO!
    Há várias formas de resolver o problema.
    Serão apresentadas 2 soluções possíveis.
    A 2ª solução implementa um algoritmo que se usa numa estrutura de repetição (a aprender).
  */

  // Solução 1
  int d0 = n % 10;
  int d1 = (n / 10) % 10;
  int d2 = (n / 100) % 10;

  // Solução 2
  int aux = n;
  int d0  = aux % 10;
  aux = aux / 10;
  int d1  = aux % 10;
  aux = aux / 10;
  int d2  = aux % 10;  // cálculo redundante


  printf("%d = %d x 1 + %d x 10 + %d x 100\n", n, d0, d1, d2);

  return 0;
}
