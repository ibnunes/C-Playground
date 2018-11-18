#include <stdio.h>

const int DIM = 5;

void lerArray(float v[DIM]) {
   for (int i = 0; i < DIM; i++) {
      printf("v[%d]? ", i);
      scanf("%f", &v[i]);
   }
}

float media(float v[DIM]) {
   float media = 0;
   for (int i = 0; i < DIM; i++)
      media += v[i];
   return (media / DIM);
}

int main(void) {
   float v[DIM];
   lerArray(v);
   printf("Media = %f\n", media(v));
   return 0;
}
