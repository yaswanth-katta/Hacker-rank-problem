#include <stdio.h>
int main() {
  int t, x = 1, a[10], i;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    int n;
    scanf("%d", &n);
    if (n == 0)
      a[i] = x;
    else if (n % 2 == 0) {
      while (n != 0) {
        x = 2 * x + 1;
        n -= 2;
      }
    } else {
      while (n != 1) {
        x = 2 * x + 1;
        n -= 2;
      }
      if (n == 1) {
        x = 2 * x;
      }
    }
    a[i] = x;
    x = 1;
  }
  for (int i = 0; i < t; i++) {
    printf("%d\n", a[i]);
  }
  return 0;
}
