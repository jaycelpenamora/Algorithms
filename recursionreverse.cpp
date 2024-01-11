#include <iostream>

using std::cout;

void recurse(int *arr, int index, int size) {
  if (index == size) {
    return;
  } else {
    recurse(arr, index + 1, size);
    cout << arr[index] << " ";
  }
}
int main() {
  int size{10};
  int *arr = new int[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  recurse(arr, 0, size);
  return 0;
}
