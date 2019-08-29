#include <stdio.h>
int main() {
  int x1, v1, x2, v2, m, n;
  scanf("%d%d%d%d", &x1, &v1, &x2, &v2);
  if (v1 > v2) {
    while (x1 <= x2) {
      if (x1 == x2) {
        printf("YES");
        return 0;
      }
      x1 = x1 + v1;
      x2 = x2 + v2;
    }
  }

  if (v2 > v1) {
    while (x2 <= x1) {
      if (x1 == x2) {
        printf("YES");
        return 0;
      }
      x1 = x1 + v1;
      x2 = x2 + v2;
    }
  }

  if (v1 == v2) {
    if (x1 == x2) {
      printf("YES");
      return 0;
    }
  }
  printf("NO");
  return 0;
}

