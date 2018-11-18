#include <stdio.h>

const int L = 3, C = 2;

void lerMatriz(float [L][C]);

int main(void) {
   float m[L][C];
   lerMatriz(m);
   for (int i = 0; i < C; i++) {
      for (int j = 0; j < L; j++)
         printf("%6.2f ", m[j][i]);
      printf("\n");
   }
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
