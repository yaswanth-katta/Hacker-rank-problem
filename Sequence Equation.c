#include <stdio.h>
int main() {
  int n, i;
  scanf("%d", &n);
  int p[n + 1];
  for (i = 1; i <= n; i++) {
    int k;
    scanf("%d", &k);
    p[k] = i;
  }
  for (i = 1; i <= n; i++) {
    printf("%d\n", p[p[i]]);
  }
  return 0;
}
