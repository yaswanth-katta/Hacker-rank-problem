#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int m = 0, k = 0, left[n], right[n];
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[0]) {
      left[m] = arr[i];
      m++;
    }
    if (arr[i] > arr[0]) {
      right[k] = arr[i];
      k++;
    }
  }
  for (int i = 0; i < m; i++)
    printf("%d ", left[i]);

  printf("%d ", arr[0]);

  for (int i = 0; i < k; i++)
    printf("%d ", right[i]);
  return 0;
}
