#include <stdio.h>

const int DIM = 5;

void lerArray(int v[DIM]) {
   for (int i = 0; i < DIM; i++) {
      printf("v[%d]? ", i);
      scanf("%d", &v[i]);
   }
}

int maximo(int v[DIM]) {
   int max = v[0];
   for (int i = 1; i < DIM; i++)
      max = (v[i] > max) ? v[i] : max;
   return max;
}

int minimo(int v[DIM]) {
   int min = v[0];
   for (int i = 1; i < DIM; i++)
      min = (v[i] < min) ? v[i] : min;
   return min;
}

int main(void) {
   int v[DIM];
   lerArray(v);
   printf("Min = %d\nMax = %d\n", minimo(v), maximo(v));
   return 0;
}
