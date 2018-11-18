#include <stdio.h>
#include <string.h>

#define LEN 50

void removelf(char *s) {
   for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] == 10 || s[i] == 13) {
         s[i] = '\0';
         break;
      }
   }
}

int strcontains(const char *substr, const char *str) {
   unsigned subcount = 0;
   for (int i = 0; i < strlen(str); i++) {
      if (str[i] == substr[subcount])
         subcount++;
      else
         subcount = 0;
      if (subcount == strlen(substr))
         break;
   }
   return (subcount == strlen(substr));
}

int main(void) {
   char s[LEN], t[LEN];
   printf("Insira linha de texto: ");
   fgets(s, LEN, stdin);
   printf("O que procurar? ");
   fgets(t, LEN, stdin);

   // o fgets apanha os CR e LF, devem ser removidos
   removelf(s);
   removelf(t);

   if (strcontains(t, s))
      puts("Contem");
   else
      puts("Nao contem");
}
