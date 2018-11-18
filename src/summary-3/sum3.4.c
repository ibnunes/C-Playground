#include <stdio.h>
#define A 92   // Alunos
#define T 4    // Testes

int aprovados(float [A][T]);
void melhor_teste(float [A][T]);
int reprovados_mais8(float [A][T]);

int main(void) {
   float m[A][T];
   // preencher matriz M...
   printf("Alunos aprovados: %d\n", aprovados(m));
   puts("Melhor nota em cada teste:");
   melhor_teste(m);
   printf("Reprovados com nota > 8.0: %d\n", reprovados_mais8(m));
}

int aprovados(float m[A][T]) {
   int count = 0;
   float soma;
   for (int a = 0; a < A; a++) {
      soma = 0.0;
      for (int t = 0; t < T; t++)
         soma += m[a][t];
      if (soma >= 9.5)
         count++;
   }
   return count;
}

void melhor_teste(float m[A][T]) {
   float max;
   for (int t = 0; t < T; t++) {
      max = 0.0;
      for (int a = 0; a < A; a++)
         max = (m[a][t] > max) ? m[a][t] : max;
      printf("Teste %d: %f\n", t+1, max);
   }
}

int reprovados_mais8(float m[A][T]) {
   int count = 0;
   float soma;
   for (int a = 0; a < A; a++) {
      soma = 0.0;
      for (int t = 0; t < T; t++)
         soma += m[a][t];
      if ((soma > 8.0) && (soma < 9.5))
         count++;
   }
   return count;
}
