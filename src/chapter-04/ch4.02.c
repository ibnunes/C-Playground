#include <stdio.h>

int main(void) {
  double a, b, c;

  printf("Introduza A, B e C (formato 'A B C'): ");
  scanf("%lf %lf %lf", &a, &b, &c);

  int prod = 0;

  if (a == 0.1) {
    if ((b == 0.5) && (c == 0.6))
      prod = 1;
    else if ((b == 0.3) && (c == 0.7))
      prod = 2;
  } else if (a == 0.2) {
    if (b == 0.5) {
      if (c == 0.7)
        prod = 3;
      else if (c == 0.6)
        prod = 5;
    } else if ((b == 0.3) && (c == 0.1))
      prod = 4;
  }

  if (prod == 0)
    printf("Produto indefinido\n");
  else
    printf("Produto %d\n", prod);

  return 0;
}
