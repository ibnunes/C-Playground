#include <stdio.h>
#include <string.h>

#define LEN 50

void strtocapital(char *destin, const char *origin) {
   unsigned i = 0;
   strcpy(destin, origin);
   while (destin[i] != '\0') {
      if ((destin[i] >= 'a') && (destin[i] <= 'z'))
         destin[i] = destin[i] - 'a' + 'A';
      i++;
   }
}

int main(void) {
   char s[LEN], c[LEN];
   printf("Insira linha de texto: ");
   fgets(s, LEN, stdin);
   strtocapital(c, s);
   puts(c);
}
