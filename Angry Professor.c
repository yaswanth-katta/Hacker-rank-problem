#include <stdio.h>
int main() {
  int T;
  int N, K;
  int a[10000];
  int i, j;
  scanf("%d", &T);
  for (i = 0; i < T; i++) {
    scanf("%d %d", &N, &K);
    for (j = 0; j < N; j++) {
      scanf("%d", &a[j]);

      if (a[j] <= 0) {
        K--;
      }
    }
    if (K <= 0) {
      printf("NO\n");
    } else {
      printf("YES\n");
    }
  }
}
