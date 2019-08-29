#include <stdio.h>
#include <stdlib.h>


void swap(int values[], int i, int j) {
  int tmp = values[i];
  values[i] = values[j];
  values[j] = tmp;
}

int partition(int values[], int begin, int end) {
  int key = values[end], i = begin - 1, j;

  for (j = begin; j < end; ++j) {
    if (values[j] < key) {
      swap(values, ++i, j);
    }
  }
  swap(values, ++i, end);
  return i;
}

void quick_sort(int values[], int begin, int end) {
  if (begin >= end)
    return;
  int p = partition(values, begin, end);
  quick_sort(values, begin, p - 1);
  quick_sort(values, p + 1, end);
}

int min_diff(int values[], size_t size) {
  int diff = values[1] - values[0], max = size - 1, i;

  for (i = 1; i < max; ++i) {
    if (values[i + 1] < values[i] + diff) {
      diff = values[i + 1] - values[i];
    }
  }
  return diff;
}

void show_pairs_with_diff(int values[], int diff, size_t size) {
  int max = size - 1, first = 1, i;

  for (i = 0; i < max; ++i) {
    if (values[i] + diff == values[i + 1]) {
      if (first) {
        first = 0;
        printf("%d %d", values[i], values[i + 1]);
      } else {
        printf(" %d %d", values[i], values[i + 1]);
      }
    }
  }
}

int main() {
  int n, i, *values, diff;

  scanf("%d", &n);
  values = (int *)malloc(n * sizeof(int));
  for (i = 0; i < n; ++i) {
    scanf("%d", &values[i]);
  }
  quick_sort(values, 0, n - 1);
  diff = min_diff(values, n);
  show_pairs_with_diff(values, diff, n);

  free(values);
  return 0;
}
