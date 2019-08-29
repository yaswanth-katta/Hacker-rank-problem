#include <stdio.h>
int main() {
  long long int n, month, date, count = 0, sum = 0, i, j, k = 1;
  scanf("%lld", &n);
  long long int s[n];
  for (i = 0; i < n; i++) {
    scanf("%lld", &s[i]);
  }
  scanf("%lld%lld", &date, &month);
  if (n != 1) {
    for (i = 0; i < n; i++, sum = 0, k = 1) {
      sum = s[i];
      for (j = 1; j < month; j++) {
        sum = sum + s[k + i];
        k++;
      }
      if (sum == date)
        count++;
    }
    printf("%lld", count);
  } else if (s[0] == date)
    printf("1");
  return 0;
}
