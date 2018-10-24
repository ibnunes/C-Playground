#include <stdio.h>
#include <math.h>

/*
  Instruções para compilar:
    gcc -o ex4.14 ex4.14.c -lm
  O argumento '-lm' deve ser o último.
*/

int main(void) {
  unsigned dec;

  printf("Insira numero decimal positivo: ");
  scanf("%u", &dec);

  unsigned long bin = 0;
  for (int i = 1; dec > 0; i *= 10) {
    bin += (dec % 2) * i;
    dec /= 2;
  }

  printf("Em binario: %lu\n", bin);

  return 0;
}
