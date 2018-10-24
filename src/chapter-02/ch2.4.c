#include <stdio.h>

int main(void) {
  int num_aluno, idade_aluno;
  float peso_aluno;

  printf("Qual e o teu numero de aluno? ");
  scanf("%d", &num_aluno);
  printf("Quantos anos tens? ");
  scanf("%d", &idade_aluno);
  printf("Quanto pesas? ");
  scanf("%f", &peso_aluno);

  printf("Ola! Tu es o aluno %d, tens %d anos e pesas %fkg.\n", num_aluno, idade_aluno, peso_aluno);

  return 0;
}
