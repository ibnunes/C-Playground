#include <stdio.h>

const int L = 3, C = 2;

void lerMatriz(float [L][C]);
void somaMatrizes(float [L][C], float [L][C], float [L][C]);
void escreverMatriz(float [L][C]);

int main(void) {
   float a[L][C], b[L][C], s[L][C];

   printf("Matriz A:\n");
   lerMatriz(a);
   printf("\nMatriz B:\n");
   lerMatriz(b);

   somaMatrizes(a, b, s);

   printf("\nSOMA:\n");
   escreverMatriz(s);

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

void somaMatrizes(float a[L][C], float b[L][C], float r[L][C]) {
   for (int i = 0; i < L; i++)
      for (int j = 0; j < C; j++)
         r[i][j] = a[i][j] + b[i][j];
}

void escreverMatriz(float m[L][C]) {
   for (int i = 0; i < L; i++) {
      for (int j = 0; j < C; j++)
         printf(" %4.2f ", m[i][j]);
      printf("\n");
   }
}
