#include<stdio.h>

int main(void) {
  unsigned short menu = 0;

  do {
    printf("MENU -- IMC E PESO IDEAL\n");
    printf("0. Sair\n");
    printf("1. Calculo do IMC e respectiva categoria\n");
    printf("2. Calculo do peso ideal\n");
    printf("Opção? ");
    scanf("%hu", &menu);
    if (menu > 2)
      printf("ERRO: opcao invalida!\n");
    printf("\n");
  } while (menu > 2);

  if (menu == 0)
    return 0;

  double altura, peso, imc, pmi, pma;

  printf("Introduza altura (metros): ");
  scanf("%lf", &altura);

  switch (menu) {
    case 1:
      printf("Introduza peso (kg): ");
      scanf("%lf", &peso);

      imc = peso / (altura * altura);

      printf("IMC = %lf\n", imc);
      printf("Categoria = ");

      if (imc < 19.0)
        printf("Magreza\n");
      else if ((imc >= 19.0) && (imc <= 25.0))
        printf("Normal\n");
      else if ((imc >  25.0) && (imc <= 30.0))
        printf("Excesso de peso\n");
      else if ((imc >  30.0) && (imc <= 40.0))
        printf("Obesidade\n");
      else
        printf("Obesidade morbida\n");

      break;


    case 2:
      pmi = 19.0 * altura * altura;
      pma = 25.0 * altura * altura;

      printf("PMI = %lf\nPMA = %lf\n", pmi, pma);

      break;
  }

  return 0;
}
