#include <stdio.h>
int main() {
  int n, k = 2, r = 2, i;
  scanf("%d", &n);
  if (n <= 50) {
    for (i = 2; i <= n; i++) {
      k = k * 3;
      k = k / 2;
      r = r + k;
    }
  }
  printf("%d", r);
  return 0;
}
