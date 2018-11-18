#include <stdio.h>
#define LEN 50

int strcounta(char*);
char *strlower(char*);
char *strset(char*, char, int);
int strwords(char*);
int strpack(char*);

void removelf(char*);

int main(void) {
   char s[LEN];
   printf("Insira linha de texto: ");
   fgets(s, LEN, stdin);

   removelf(s);
   
   printf("strcounta(s)      = %d\n", strcounta(s));
   printf("strlower(s)       = '%s'\n", strlower(s));
   printf("strset(s, 'a', 5) = '%s'\n", strset(s, 'a', 5));
   printf("strword(s)        = %d\n", strwords(s));
   printf("strpack(s)        = %d -> '%s'\n", strpack(s), s);
}

int strcounta(char *s){
   int count = 0;
   for (int i = 0; s[i] != '\0'; i++)
      if (((s[i] >= 'A') && (s[i] <= 'Z')) || ((s[i] >= 'a') && (s[i] <= 'z')))
         count++;
   return count;
}

char *strlower(char *s) {
   for (int i = 0; s[i] != '\0'; i++) {
      if ((s[i] >= 'A') && (s[i] <= 'Z'))
         s[i] = s[i] + 'a' - 'A';
   }
   return s;
}

char *strset(char *s, char ch, int n) {
   for (int i = 0; (s[i] != '\0') && (i < n); i++)
      s[i] = ch;
   return s;
}

int strwords(char *s) {
   int count = 0;
   if (s[0] == '\0')
      return count;

   int lastspace = 1;
   for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] == ' ') {
         if (!lastspace) {
            count++;
            lastspace = 1;
         }
      } else
         lastspace = 0;
   }
   return count + !lastspace;
}

int strpack(char *s) {
   int i = 1, j = 1;
   char lastch = s[0];
   if (lastch == '\0')
      return 0;
   int count = 0;
   while (s[i] != '\0') {
      if (s[i] != lastch) {
         lastch = s[i];
         s[j] = s[i];
         j++;
      } else
         count++;
      i++;
   }
   s[j] = '\0';
   return count;
}

void removelf(char *s) {
   for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] == 10 || s[i] == 13) {
         s[i] = '\0';
         break;
      }
   }
}
