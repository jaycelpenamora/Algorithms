#include <iostream>

using std::cout;

void merge(int arr[], const int l, const int m, const int r) {
  const int l1 = m - l + 1;
  const int l2 = r - m;

  auto *L = new int[l1];
  auto *R = new int[l2];
  for (int i = 0; i < l1; i++) {
    L[i] = arr[l + i];
  }
  for (int i = 0; i < l1; i++) {
    R[i] = arr[l + m + i];
  }
  auto L_index = 0;
  auto R_index = 0;
  int Merged_index = l;

  while (L_index < l1 && R_index < l2) {
    if (L[L_index] <= R[R_index]) {
      arr[Merged_index] = L[L_index];
      L_index++;
    } else {
      arr[Merged_index] = R[R_index];
      R_index++;
    }
    Merged_index++;
  }

  delete[] L;
  delete[] R;
}

void mergesort(int arr[], const int begin, const int end) {
  if (begin < end)
    return;
  int middle = (begin + end) / 2;
  mergesort(arr, begin, middle);
  mergesort(arr, middle + 1, end);
  merge(arr, begin, middle, end);
}
int main() {
  int unsorted[] = {5, 3, 8, 6, 2, 7, 1, 4};
  int size = sizeof(unsorted) / sizeof(unsorted[0]);

  mergesort(unsorted, 0, size - 1);
}
