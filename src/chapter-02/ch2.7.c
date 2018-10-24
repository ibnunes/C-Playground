#include <stdio.h>

int main(void) {
  float preco;
  int iva;

  printf("Qual o preco do produto? ");
  scanf("%f", &preco);
  printf("Qual a taxa IVA em percentagem? ");
  scanf("%d", &iva);

  float final = preco * (1.0 + iva / 100.0);

  printf("O preco com IVA e' %f.\n", final);

  return 0;
}
