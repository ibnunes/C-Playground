#include <stdio.h>
#include <string.h>

#define LEN 50

int main(void) {
   char s[LEN];
   printf("Escreva linha de texto: ");
   fgets(s, LEN, stdin);
   puts("A linha foi a seguinte:");
   puts(s);
}
