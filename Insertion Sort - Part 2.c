#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void insertionSort(int size, int *ar) {
  int i, j, t;
  for (i = 1; i < size; i++) {
    j = i;
    while (ar[j] < ar[j - 1] && j > 0) {
      t = ar[j];
      ar[j] = ar[j - 1];
      ar[j - 1] = t;
      j--;
    }
    for (j = 0; j < size; j++) {
      printf("%d ", ar[j]);
    }
    printf("\n");
  }
}
int main(void) {

  int size;
  scanf("%d", &size);
  int ar[size], i;
  for (i = 0; i < size; i++) {
    scanf("%d", &ar[i]);
  }

  insertionSort(size, ar);

  return 0;
}
