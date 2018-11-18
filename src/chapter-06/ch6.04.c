#include <stdio.h>

const int DIM = 5;

void lerArray(int v[DIM]) {
   for (int i = 0; i < DIM; i++) {
      printf("v[%d]? ", i);
      scanf("%d", &v[i]);
   }
}

int posicaoMaximo(int v[DIM]) {
   int max = v[0], pos = 0;
   for (int i = 1; i < DIM; i++) {
      if (v[i] > max) {
         max = v[i];
         pos = i;
      }
   }
   return pos;
}

int posicaoMinimo(int v[DIM]) {
   int min = v[0], pos = 0;
   for (int i = 1; i < DIM; i++) {
      if (v[i] < min) {
         min = v[i];
         pos = i;
      }
   }
   return pos;
}

int main(void) {
   int v[DIM];
   lerArray(v);
   printf("posMin = %d\nposMax = %d\n", posicaoMinimo(v), posicaoMaximo(v));
   return 0;
}
