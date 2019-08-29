#include <stdio.h>
int main() {
  int n, m;
  scanf("%d", &n);
  m = n - 1;
  int a[n][n], k = 0, i, j, total = 0, sum = 0, r;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
      if (i == j) {
        sum = sum + a[i][j];
      }
      if (k == i && m == j) {
        total = total + a[i][j];
        k++;
        m--;
      }
    }
  }
  r = sum - total;
  printf("%d", (r >= 0) ? r : (-r));
  return 0;
}
