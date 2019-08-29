#include <stdio.h>
int main() {
  int n, k, i, r, m;
  scanf("%d%d", &n, &k);
  int arr[n];
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  m = arr[0];
  for (i = 1; i < n; i++) {
    if (m < arr[i])
      m = arr[i];
  }
  r = m - k;
  if (r > 0)
    printf("%d", r);
  else
    printf("0");
  return 0;
}
