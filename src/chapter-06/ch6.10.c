#include <stdio.h>

const int L = 3, C = 2;

void lerMatriz(float [L][C]);
float maximo(float [L][C]);
float minimo(float [L][C]);

int main (void) {
   float matriz[L][C];
   lerMatriz(matriz);
   printf("Max = %f\nMin = %f\n", maximo(matriz), minimo(matriz));
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

float maximo(float m[L][C]) {
   float max = m[0][0];
   for (int i = 0; i < L; i++)
      for (int j = 0; j < C; j++)
         max = (m[i][j] > max) ? m[i][j] : max;
   return max;
}

float minimo(float m[L][C]) {
   float min = m[0][0];
   for (int i = 0; i < L; i++)
      for (int j = 0; j < C; j++)
         min = (m[i][j] < min) ? m[i][j] : min;
   return min;
}
