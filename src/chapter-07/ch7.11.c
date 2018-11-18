#include <stdio.h>

#define LEN 50

void removelf(char*);

void strremove(char c, char *s) {
   int i = 0, j = 0;
   while (s[i] != '\0') {
      if (s[i] != c) {
         s[j] = s[i];
         j++;
      }
      i++;
   }
   s[j] = '\0';
}

int main(void) {
   char s[LEN], ch;
   printf("Insira linha de texto: ");
   fgets(s, LEN, stdin);
   printf("Caracter a remover: ");
   scanf("%c", &ch);
   removelf(s);
   strremove(ch, s);
   puts("NOVA STRING:");
   puts(s);
}

void removelf(char *s) {
   for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] == 10 || s[i] == 13) {
         s[i] = '\0';
         break;
      }
   }
}
