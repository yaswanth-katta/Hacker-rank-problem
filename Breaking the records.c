#include <stdio.h>
int main() {
  int i, n, count = 0, count1 = 0, m = 0, k = 0;
  scanf("%d", &n);
  int arr[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = 1; i < n; i++) {
    if (arr[k] < arr[i]) {
      count++;
      k = i;
    }
    if (arr[m] > arr[i]) {
      count1++;
      m = i;
    }
  }
  printf("%d %d", count, count1);
  return 0;
}
