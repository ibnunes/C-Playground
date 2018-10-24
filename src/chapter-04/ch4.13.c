#include <stdio.h>
#include <math.h>

/*
  Instruções para compilar:
    gcc -o ex4.13 ex4.13.c -lm
  O argumento '-lm' deve ser o último.
*/

int main(void) {
  unsigned long bin;

  printf("Insira numero em binario: ");
  scanf("%lu", &bin);

  int dec = 0;
  for (int i = 0; bin > 0; i++) {
    dec += (bin % 10) * (unsigned long)powf(2.0, (float)i);
    bin /= 10;
  }

  printf("Em decimal: %d\n", dec);

  return 0;
}
