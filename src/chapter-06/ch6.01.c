#include <stdio.h>

const int DIM = 5;

void lerArray(float v[DIM]) {
   for (int i = 0; i < DIM; i++) {
      printf("v[%d]? ", i);
      scanf("%f", &v[i]);
   }
}

void escreverArray(float v[DIM]) {
   for (int i = 0; i < DIM; i++)
      printf("v[%d] = %f\n", i, v[i]);
}

int main(void) {
   float v[DIM];
   lerArray(v);
   escreverArray(v);
   return 0;
}
