#include <iostream>

using std::cout, std::endl;
int recurse(int *arr, int index, int sum, int size) {
  if (index == size) {
    return sum;
  } else {
    sum += arr[index];
    return recurse(arr, index + 1, sum, size);
  }
}
int main() {
  int size{10};
  int *arr = new int[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << recurse(arr, 0, 0, size) << endl;
  return 0;
}
