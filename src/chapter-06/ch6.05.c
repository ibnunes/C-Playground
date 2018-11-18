#include <stdio.h>

const int DIM = 5;

void lerArray(float v[DIM]) {
   for (int i = 0; i < DIM; i++) {
      printf("v[%d]? ", i);
      scanf("%f", &v[i]);
   }
}

void soma(float a[DIM], float b[DIM], float c[DIM]) {
   for (int i = 0; i < DIM; i++)
      c[i] = a[i] + b[i];
}

void escreverArray(float v[DIM]) {
   for (int i = 0; i < DIM; i++)
      printf("v[%d] = %f\n", i, v[i]);
}

int main(void) {
   float a[DIM], b[DIM], c[DIM];
   lerArray(a);
   lerArray(b);
   soma(a, b, c);
   escreverArray(c);
   return 0;
}
