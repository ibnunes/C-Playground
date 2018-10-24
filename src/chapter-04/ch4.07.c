#include <stdio.h>

int main(void) {
  int count = 1, num, min, max;

  do {
    printf("Introduza nº (#%d): ", count);
    scanf("%d", &num);
    if ((num == 0) && (count <= 2))
      continue;
    if (num != 0) {
      if (count == 1)
        max = min = num;
      else {
        if (num > max)
          max = num;
        if (num < min)
          min = num;
      }
      count++;
    }
  } while ((count <= 2) || (num != 0));

  printf("Min = %d\nMax = %d\n", min, max);

  return 0;
}
