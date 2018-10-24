#include <stdio.h>

void tabuada(int n) {
  for (int i = 1; i <= 10; i++)
    printf("%2d x %2d = %3d\n", n, i, n*i);
}

int main(void) {
  int n;

  do {
    printf("Tabuada de N (de 1 a 10): ");
    scanf("%d", &n);
  } while ((n < 1) || (n > 10));

  tabuada(n);

  return 0;
}
