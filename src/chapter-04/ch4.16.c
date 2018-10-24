#include <stdio.h>

int main(void) {
  unsigned long num;

  printf("Insira numero positivo: ");
  scanf("%lu", &num);

  unsigned long origin = num, invert = 0;
  while (num > 0) {
    invert = (num % 10) + (invert * 10);
    num /= 10;
  }

  if (origin == invert)
    printf("E' capicua.\n");
  else
    printf("Nao e' capicua.\n");

  return 0;
}
