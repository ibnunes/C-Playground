#include <stdio.h>

#define L 2
#define C 2

void lerMatriz(int [L][C]);
void escreverMatriz(int [L][L]);
void produtoMatrizes(int [L][C], int [C][L], int [L][L]);

int main(void) {
   int a[L][C], b[C][L], p[L][L];
   printf("INSERIR matriz A:\n");
   lerMatriz(a);
   printf("\nINSERIR matriz B:\n");
   lerMatriz(b);
   produtoMatrizes(a, b, p);
   printf("\nPRODUTO:\n");
   escreverMatriz(p);
   return 0;
}

void produtoMatrizes(int a[L][C], int b[C][L], int p[L][L]) {
   int soma;
   for (int i = 0; i < L; i++) {
      for (int j = 0; j < L; j++) {
         soma = 0;
         for (int k = 0; k < C; k++)
            soma += a[i][k] * b[k][j];
         p[i][j] = soma;
      }
   }
}

void lerMatriz(int m[L][C]) {
   for (int i = 0; i < L; i++)
      for (int j = 0; j < C; j++) {
         printf("m[%d][%d]? ", i, j);
         scanf("%d", &m[i][j]);
      }
}

void escreverMatriz(int m[L][L]) {
   for (int i = 0; i < L; i++) {
      for (int j = 0; j < L; j++)
         printf("%3d ", m[i][j]);
      printf("\n");
   }
}
