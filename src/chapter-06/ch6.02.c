#include <stdio.h>

const int DIM = 5;

void lerArray(int v[DIM]) {
   for (int i = 0; i < DIM; i++) {
      printf("v[%d]? ", i);
      scanf("%d", &v[i]);
   }
}

int somaElementosArray(int v[DIM]) {
   int soma = 0;
   for (int i = 0; i < DIM; i++)
      soma += v[i];
   return soma;
}

int main(void) {
   int v[DIM];
   lerArray(v);
   printf("Soma de v = %d\n", somaElementosArray(v));
   return 0;
}
