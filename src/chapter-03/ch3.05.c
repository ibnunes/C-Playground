#include <stdio.h>
#include <math.h>

/*
  Instruções para compilar:
    gcc -o ex3.5 ex3.5.c -lm
  O argumento '-lm' deve ser o último.
*/

int main(void) {
  float x, y;

  printf("Introduza x: ");
  scanf("%f", &x);
  printf("Introduza y: ");
  scanf("%f", &y);

  float f = 2*sinf(x) + cosf(y) - tanf(x+y);

  printf("2.sin(x)+cos(y)-tan(x+y) = %f\n", f);

  return 0;
}
