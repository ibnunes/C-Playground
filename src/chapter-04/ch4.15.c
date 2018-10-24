#include <stdio.h>

int main(void) {
  int num;

  do {
    printf("Insira numero positivo: ");
    scanf("%d", &num);
  } while (num < 0);

  primo = 1;
  for(int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      primo = 0;
      break;
    }
  }

  if (primo)
    printf("%d e' primo.\n");
  else
    printf("%d nao e' primo.\n");

  return 0;
}
