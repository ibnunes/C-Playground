#include <stdio.h>
#define LEN 50
typedef enum {FALSE, TRUE} boolean;

unsigned strlength(char *s) {
   unsigned i = 0;
   for (; s[i] != '\0'; i++);
   return --i;
}

boolean capicua(char *s) {
   boolean cap = TRUE;
   for (unsigned i = 0, j = strlength(s)-1; i <= j; i++, j--)
      if (s[i] != s[j]) {
         cap = FALSE;
         break;
      }
   return cap;
}

int main(void) {
   char s[LEN];
   printf("Insira linha de texto: ");
   fgets(s, LEN, stdin);
   if (capicua(s))
      puts("E' capicua");
   else
      puts("Nao e' capicua");
}
