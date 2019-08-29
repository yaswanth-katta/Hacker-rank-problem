#include <stdio.h>
int main() {
  int t, n, count = 0, i, r, k;
  scanf("%d", &t);
  for (i = 0; i < t; i++, count = 0) {
    scanf("%d", &n);
    k = n;
    while (n != 0) {
      r = n % 10;
      if (r != 0 && k % r == 0)
        count++;
      n = n / 10;
    }
    printf("%d\n", count);
  }
  return 0;
}
