#include <stdio.h>

const int L = 3, C = 2;

void lerMatriz(float [L][C]);
void escreverMatriz(float [L][C]);

int main(void) {
   float matriz[L][C];
   lerMatriz(matriz);
   escreverMatriz(matriz);
   return 0;
}

void lerMatriz(float m[L][C]) {
   for (int i = 0; i < L; i++) {
      for (int j = 0; j < C; j++) {
         printf("m[%d][%d]? ", i, j);
         scanf("%f", &m[i][j]);
      }
   }
}

void escreverMatriz(float m[L][C]) {
   for (int i = 0; i < L; i++) {
      for (int j = 0; j < C; j++)
         printf(" %4.2f ", m[i][j]);
      printf("\n");
   }
}
