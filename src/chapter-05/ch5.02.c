#include <stdio.h>

int maiorDeTres(int a, int b, int c) {
  if (a > b) {
    if (a > c)
      return a;
    else
      return c;
  } else {
    if (b > c)
      return b;
    else
      return c;
  }
}

int main(void) {
  int a, b, c;

  printf("Insira 3 numeros como 'A B C': ");
  scanf("%d %d %d", &a, &b, &c);

  printf("O maior e' %d.\n", maiorDeTres(a, b, c));

  return 0;
}
