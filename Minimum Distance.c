#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, m = 0, k[100000], min, i, j;
  bool flag = false;
  scanf("%d", &n);
  int arr[n];
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        k[m] = abs(i - j);
        m++;
      }
    }
  }
  min = k[0];
  for (i = 0; i < m; i++) {
    if (k[i] <= min) {
      min = k[i];
      flag = true;
    }
  }
  if (flag) {
    printf("%d", min);
  } else {
    printf("-1");
  }
  return 0;
}
