#include <stdio.h>

int main(void) {
  unsigned short plano;       // Plano Tarifário        {1,2}

  printf("Escolha o seu PLANO TARIFARIO:\n1. Cartao Recarregavel\n2. Plano Personalizado de Precos\n\n");
  printf("Opção? ");
  scanf("%hu", &plano);
  if ((plano != 1) && (plano != 2)) {
    printf("Opcao INVALIDA!\n");
    return 1;
  }
  printf("\n");

  unsigned short tarifario;   // Tarifário específico   {1,2,3}

  printf("Escolha o seu TARIFARIO:\n");
  printf("1. %s\n",   (plano == 1) ? "MyNet"     : "Base");
  printf("2. %s\n",   (plano == 1) ? "MyFriends" : "Super");
  printf("3. %s\n\n", (plano == 1) ? "MyJob"     : "Executive");
  printf("Opção? ");
  scanf("%hu", &tarifario);
  if ((tarifario < 1) || (tarifario > 3)) {
    printf("Opcao INVALIDA\n");
    return 2;
  }
  printf("\n");

  unsigned min_mesma;         // Minutos de conversação para a mesma rede
  unsigned min_outras;        // Minutos de conversação para outras redes nacionais
  unsigned min_fixa;          // Minutos de conversação para a rede fixa nacional

  printf("Agora vai indicar o seu uso do telemovel em MINUTOS:\n\n");
  printf("Quantos minutos fala para a mesma rede? ");
  scanf("%u", &min_mesma);
  printf("Quantos minutos fala para outras redes nacionais? ");
  scanf("%u", &min_outras);
  printf("Quantos minutos fala para redes fixas nacionais? ");
  scanf("%u", &min_fixa);

  double preco;   // Valor mensal previsto pagar -- precisão dupla

  switch (plano) {
    case 1:
      switch (tarifario) {
        case 1:
          preco = 0.05 * min_mesma + 0.50 * min_outras + 0.50 * min_fixa;
          break;

        case 2:
          preco = 0.10 * min_mesma + 0.10 * min_outras + 0.50 * min_fixa;
          break;

        case 3:
          preco = 0.10 * min_mesma + 0.50 * min_outras + 0.10 * min_fixa;
          break;
      }
      break;

    case 2:
      switch (tarifario) {
        case 1:
          preco = 10.0 + 0.10 * min_mesma + 0.30 * min_outras + 0.30 * min_fixa;
          break;

        case 2:
          preco = 15.0 + 0.05 * min_mesma + 0.20 * min_outras + 0.20 * min_fixa;
          break;

        case 3:
          preco = 25.0 + 0.05 * min_mesma + 0.05 * min_outras + 0.05 * min_fixa;
          break;
      }
      break;
  }

  printf("\n\nPREVISAO\nEsta previsto pagar o seguinte montante: %.2lf.\n", preco);

  return 0;
}
