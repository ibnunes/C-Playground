#include <stdio.h>

const int L = 3, C = 2;

void lerMatriz(float [L][C]);
void posicaoMaximo(float [L][C]);
void posicaoMinimo(float [L][C]);

int main (void) {
   float matriz[L][C];
   lerMatriz(matriz);
   posicaoMaximo(matriz);
   posicaoMinimo(matriz);
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

void posicaoMaximo(float m[L][C]) {
   float max = m[0][0];
   int pX = 0, pY = 0;
   for (int i = 0; i < L; i++)
      for (int j = 0; j < C; j++)
         if (m[i][j] > max) {
            max = m[i][j];
            pX = i;
            pY = j;
         }
   printf("Max at [%d][%d]\n", pX, pY);
}

void posicaoMinimo(float m[L][C]) {
   float min = m[0][0];
   int pX = 0, pY = 0;
   for (int i = 0; i < L; i++)
      for (int j = 0; j < C; j++)
         if (m[i][j] < min) {
            min = m[i][j];
            pX = i;
            pY = j;
         }
   printf("Min at [%d][%d]\n", pX, pY);
}
