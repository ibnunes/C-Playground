#include <stdio.h>

#define LEN 50

void removelf(char*);

void copy(char *destin, char *origin) {
   int i = 0;
   for (; origin[i] != '\0'; i++)
      destin[i] = origin[i];
   destin[i] = '\0';
}

int main(void) {
   char a[LEN], b[LEN];
   puts("Insira duas linhas de texto:");
   fgets(a, LEN, stdin);
   fgets(b, LEN, stdin);
   removelf(a);
   removelf(b);
   copy(a, b);
   puts("COPY:");
   puts(a);
}

void removelf(char *s) {
   for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] == 10 || s[i] == 13) {
         s[i] = '\0';
         break;
      }
   }
}
