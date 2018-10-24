#include <stdio.h>

int main(void) {
  printf("char = %ld\nint = %ld\nfloat = %ld\ndouble=%ld\n",
    sizeof(char), sizeof(int), sizeof(float), sizeof(double));

  return 0;
}
