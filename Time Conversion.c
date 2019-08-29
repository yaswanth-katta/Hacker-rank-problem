#include <stdio.h>
int main() {
  char string1[10], m, n;
  int hour, min, sec;
  scanf("%d%c%d%c%d%s", &hour, &m, &min, &n, &sec, &string1);
  if (strcmp(string1, "PM") == 0) {
    if (hour == 12)
      printf("%02d:%02d:%02d", hour, min, sec);
    else {
      hour += 12;
      printf("%02d:%02d:%02d", hour, min, sec);
    }

  } else if (strcmp(string1, "AM") == 0) {
    if (hour == 12) {
      hour -= 12;
      printf("%02d:%02d:%02d", hour, min, sec);
    } else
      printf("%02d:%02d:%02d", hour, min, sec);
  }

  return 0;
}
