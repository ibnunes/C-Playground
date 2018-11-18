#include <stdio.h>

const int DIM = 5;

void lerArray(int v[DIM]) {
   for (int i = 0; i < DIM; i++) {
      printf("v[%d]? ", i);
      scanf("%d", &v[i]);
   }
}

void copia(int a[DIM], int b[DIM]) {
   for (int i = 0; i < DIM; i++)
      b[i] = a[i];
}

void escreverArray(int v[DIM]) {
   for (int i = 0; i < DIM; i++)
      printf("v[%d] = %d\n", i, v[i]);
}

int main(void) {
   int a[DIM], b[DIM];
   lerArray(a);
   copia(a, b);
   escreverArray(b);
   return 0;
}
