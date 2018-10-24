#include <stdio.h>

int main(void) {
  int n;

  do {
    printf("Nºs a introduzir (N>=2): ");
    scanf("%d", &n);
  } while (n < 2);

  int a, min, max;

  printf("Introduza n° (#1): ");
  scanf("%d", &a);
  min = max = a;

  for (int i = 2; i <= n; i++) {
    printf("Introduza n° (#%d): ", i);
    scanf("%d", &a);
    if (a > max)
      max = a;
    if (a < min)
      min = a;
  }

  printf("Minimo = %d\nMaximo = %d\n", min, max);

  return 0;
}
