#include <stdio.h>

int main(void) {
  int n;

  printf("Introduza N: ");
  scanf("%d", &n);

  printf((n % 2 == 0) ? "Par\n" : "Impar\n");

  return 0;
}
