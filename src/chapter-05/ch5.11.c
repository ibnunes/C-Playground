#include <stdio.h>

void escreveCaracter(char c, int n) {
  for (; n > 0; n--)
    printf("%c", c);
}

void triangulo1(int base) {
  for (int i = 1; i <= base; i++) {
    escreveCaracter('T', i);
    printf("\n");
  }
}

void triangulo2(int base) {
  for (; base > 0; base--) {
    escreveCaracter('T', base);
    printf("\n");
  }
}


int main(void) {
  int n;

  printf("Base dos triangulos? ");
  scanf("%d", &n);

  triangulo1(n);
  printf("\n");
  triangulo2(n);

  return 0;
}
