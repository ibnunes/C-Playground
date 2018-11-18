#include <stdio.h>
#define L 2
#define C 3

void lerMatriz(float [L][C]);
int linhaMaiorSoma(float [L][C]);

int main(void) {
   float matriz[L][C];
   lerMatriz(matriz);
   printf("Linha de maior soma: %d\n", linhaMaiorSoma(matriz));
   return 0;
}

int linhaMaiorSoma(float m[L][C]) {
   int soma;
   int maior, pos = 0;
   for (int i = 0; i < L; i++) {
      for (int j = 0; j < C; j++) {
         soma += m[i][j];
      }
      maior = (i == 0) ? soma : maior;
      if (soma > maior) {
         pos = i;
         maior = soma;
      }
   }
   return pos;
}

void lerMatriz(float m[L][C]) {
   for (int i = 0; i < L; i++)
      for (int j = 0; j < C; j++) {
         printf("m[%d][%d]? ", i, j);
         scanf("%f", &m[i][j]);
      }
}
