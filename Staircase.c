#include <stdio.h>
int main() {
  int n, i, k = 0, j;
  scanf("%d", &n);
  for (i = 1; i <= n; i++, k = 0) {
    for (j = 1; j <= n - i; j++) {
      printf(" ");
    }
    printf("#");
    while (k != 1 * i - 1) {
      printf("#");
      k++;
    }
    printf("\n");
  }
  return 0;
}
