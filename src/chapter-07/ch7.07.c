#include <stdio.h>

#define LEN 50

void removelf(char*);

void concat(char *destin, char *s1, char *s2) {
   int j = 0;
   for (int i = 0; s1[i] != '\0'; i++)
      destin[j++] = s1[i];
   for (int i = 0; s2[i] != '\0'; i++)
      destin[j++] = s2[i];
   destin[j] = '\0';
}

int main(void) {
   char a[LEN], b[LEN], c[2*LEN];
   puts("Insira duas linhas de texto:");
   fgets(a, LEN, stdin);
   fgets(b, LEN, stdin);
   removelf(a);
   removelf(b);
   concat(c, a, b);
   puts("CONCAT:");
   puts(c);
}

void removelf(char *s) {
   for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] == 10 || s[i] == 13) {
         s[i] = '\0';
         break;
      }
   }
}
