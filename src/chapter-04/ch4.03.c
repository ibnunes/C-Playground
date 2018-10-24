#include <stdio.h>

int main(void) {
  double peso, altura;

  printf("Introduza altura (metros): ");
  scanf("%lf", &altura);
  printf("Introduza peso (kg): ");
  scanf("%lf", &peso);

  double imc = peso / (altura * altura);
  double pmi = 19.0 * altura * altura;
  double pma = 25.0 * altura * altura;

  printf("IMC = %lf\n", imc);

  printf("Categoria = ");
  if (imc < 19.0)
    printf("Magreza\n");
  else if ((imc >= 19.0) && (imc <= 25.0))
    printf("Normal\n");
  else if ((imc > 25.0) && (imc <= 30.0))
    printf("Excesso de peso\n");
  else if ((imc > 30.0) && (imc <= 40.0))
    printf("Obesidade\n");
  else
    printf("Obesidade morbida\n");

  printf("PMI = %lf\nPMA = %lf\n", pmi, pma);

  return 0;
}
