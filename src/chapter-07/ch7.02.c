#include <stdio.h>
#include <string.h>

#define LEN 50

unsigned strlength(char *s) {
   unsigned i = 0;
   for (; s[i] != '\0'; i++);
   return --i;
}

int main(void) {
   char s[LEN];
   printf("Insira linha de texto: ");
   fgets(s, LEN, stdin);
   printf("Length = %u\n", strlength(s));
}
