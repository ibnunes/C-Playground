#include <stdio.h>

const int L = 3, C = 2;

void lerMatriz(float [L][C]);
float somaElementosMatriz(float [L][C]);

int main(void) {
   float matriz[L][C];
   lerMatriz(matriz);
   printf("Soma = %f\n", somaElementosMatriz(matriz));
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

float somaElementosMatriz(float m[L][C]) {
   float soma = 0;
   for (int i = 0; i < L; i++)
      for (int j = 0; j < C; j++)
         soma += m[i][j];
   return soma;
}
