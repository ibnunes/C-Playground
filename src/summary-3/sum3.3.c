#include <stdio.h>
#define MAX 15

int main(void) {
   int list[MAX] = {8, 2, 8, 2, 8, 5, 8, 20, 145, 167, 20, 145, 8624, 10000, 145};
   for (int i = 0; i < MAX; i++) {
      int repeated = 0;
      for (int j = i-1; j >= 0; j--) {
         if (list[i] == list[j]) {
            repeated = 1;
            break;
         }
      }
      if (!repeated)
         printf("%d ", list[i]);
   }
   printf("\n");
}
