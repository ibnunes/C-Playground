#include <stdio.h>

#define A 5
#define T 12

float mediaTreino(int [A][T], int);
int melhorTempoAtleta(int [A][T], int);

int main(void) {
   int tempos[A][T]; // tempos em segundos, 'int' para efeitos de simplificação
   /* whatever... */
   /* Como usar:
      mediaTreino(tempos, treino);
      melhorTempoAtleta(tempos, atleta);
   */
   return 0;
}

float mediaTreino(int t[A][T], int treino) {
   int soma = 0;
   for (int i = 0; i < A; i++)
      soma += t[i][treino];
   return (float)soma / A;
}

int melhorTempoAtleta(int t[A][T], int atleta) {
   int melhor = 0; // o tempo não pode ser negativo, logo mínimo é sempre 0
   for (int i = 0; i < T; i++)
      melhor = (t[atleta][i] > melhor) ? t[atleta][i] : melhor;
   return melhor;
}
