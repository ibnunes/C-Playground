#include <stdio.h>

#define L 3
#define C 2

void lerMatriz(int [L][C]);
int nulosDiagonal(int [L][C]);

int main(void) {
   int matriz[L][C];
   lerMatriz(matriz);
   printf("Nulos na diagonal = %d\n", nulosDiagonal(matriz));
   return 0;
}

void lerMatriz(int m[L][C]) {
   for (int i = 0; i < L; i++)
      for (int j = 0; j < C; j++) {
         printf("m[%d][%d]? ", i, j);
         scanf("%d", &m[i][j]);
      }
}

int min(int a, int b) {
   return (a < b) ? a : b;
}

int nulosDiagonal(int m[L][C]) {
   int nulos = 0;
   for (int i = 0; i < min(L, C); i++)
      nulos += (m[i][i] == 0) ? 1 : 0;
   return nulos;
}
