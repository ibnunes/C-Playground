#include <stdio.h>

#define LEN 50

int digitos(char *s) {
   int count = 0;
   for (int i = 0; s[i] != '\0'; i++)
      if ((s[i] >= '0') && (s[i] < '9'))
         count++;
   return count;
}

int main(void) {
   char s[LEN];
   printf("Insira linha de texto: ");
   fgets(s, LEN, stdin);
   printf("Existem %d digitos.\n", digitos(s));
}
