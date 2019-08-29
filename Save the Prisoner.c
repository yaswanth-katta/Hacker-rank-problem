#include <stdio.h>
int main() {

  int n, m, s, t, i;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d%d%d", &n, &m, &s);
    if (((m + s - 1) % n == 0))
      printf("%d\n", n);
    else
      printf("%d\n", ((m + s - 1) % n));
  }
  return 0;
}
