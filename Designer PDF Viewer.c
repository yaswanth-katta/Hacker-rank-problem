#include <stdio.h>
#include <string.h>
int main() {
  int height = -1, len, heights[26];
  char str[100];
  for (int i = 0; i < 26; i++)
    scanf("%d", &heights[i]);
  scanf("%s", str);
  len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (heights[str[i] - 'a'] > height)
      height = heights[str[i] - 'a'];
  }
  printf("%d", len * height);
  return 0;
}
