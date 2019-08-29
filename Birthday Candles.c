#include <stdio.h>
int birthday(int k) {
  int arr[k], i, count = 0, location = 0, max;
  for (i = 0; i < k; i++) {
    scanf("%d", &arr[i]);
  }
  max = arr[0];
  for (i = 1; i < k; i++) {
    if (arr[i] > max) {
      max = arr[i];
      location = i;
    }
  }
  for (i = 0; i < k; i++) {
    if (arr[location] == arr[i]) {
      count++;
    }
  }
  return count;
}
int main() {
  int n, i, count = 0, location = 0, max;
  scanf("%d", &n);
  printf("%d", birthday(n));

  return 0;
}
