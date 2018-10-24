#include <stdio.h>

float maximo(float a, float b) {
  return (a > b) ? a : b;
}

float minimo(float a, float b) {
  return (a < b) ? a : b;
}

int main(void) {
  unsigned n;

  do {
    printf("Quantos numeros quer introduzir (N>=2)? ");
    scanf("%u", &n);
  } while (n < 2);

  float num, min, max;
  for (unsigned i = 1; i <= n; i++) {
    printf("Numero %d: ", i);
    scanf("%f", &num);
    if (i == 1)
      min = max = num;
    else {
      min = minimo(min, num);
      max = maximo(max, num);
    }
  }

  printf("Max = %f; Min = %f.\n", max, min);

  return 0;
}
