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

void inverte(char *destin, char *origin) {
   const int l = strlen(origin);
   int i = 0;

   while (origin[i] != '\0') {
      destin[l-i-1] = origin[i];
      i++;
   }
   destin[l] = '\0';
}

int main(void) {
   char s[LEN], inv[LEN];
   printf("Insira linha de texto: ");
   fgets(s, LEN, stdin);
   removelf(s);
   inverte(inv, s);
   puts("INVERTIDA:");
   puts(inv);
}
