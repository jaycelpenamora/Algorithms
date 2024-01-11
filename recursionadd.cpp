#include <iostream>

using std::cout, std::endl;
int recurse(int *arr, int index, int size) {
  if (index == size) {
    return arr[index - 1];
  } else {
    return arr[index] + recurse(arr, index + 1, size);
  }
}
int main() {
  int size{10};
  int *arr = new int[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << recurse(arr, 0, size) << endl;
  return 0;
}
