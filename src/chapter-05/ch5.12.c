#include <stdio.h>

void escreveCaracter(char c, int n) {
  for (; n > 0; n--)
    printf("%c", c);
}

void triangulo1(int base) {
  for (int i = 1; i <= base; i++) {
    escreveCaracter(' ', base-i);
    escreveCaracter('T', i);
    printf("\n");
  }
}

void triangulo2(int base) {
  for (int i = base; i > 0; i--) {
    escreveCaracter(' ', base-i);
    escreveCaracter('T', i);
    printf("\n");
  }
}


int main(void) {
  int n;

  printf("Base dos triangulos? ");
  scanf("%d", &n);

  triangulo2(n);
  printf("\n");
  triangulo1(n);

  return 0;
}
