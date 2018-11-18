#include <stdio.h>

#define LEN 50

int count(char c, char *s) {
   int cnt = 0;
   for (int i = 0; s[i] != '\0'; i++)
      if (s[i] == c)
         cnt++;
   return cnt;
}

int main(void) {
   char s[LEN], ch;
   printf("Insira uma linha de texto: ");
   fgets(s, LEN, stdin);
   printf("Caracter a procurar? ");
   scanf("%c", &ch);
   printf("'%c' ocorre %d vezes\n", ch, count(ch, s));
}
