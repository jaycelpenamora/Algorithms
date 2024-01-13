#include <iostream>
bool binary_search(int *arr, int target, int low, int high) {
  if (low > high)
    return false;
  int mid = (low + high) / 2;
  if (arr[mid] == target)
    return true;
  else if (arr[mid] > target)
    return binary_search(arr, target, low, mid - 1);
  else
    return binary_search(arr, target, mid + 1, high);
}
int main() {
  int size = 10;
  int *array = new int[size]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int target{};
  std::cin >> target;
  std::cout << std::boolalpha << binary_search(array, target, 0, size - 1)
            << std::endl;
  delete[] array;
  return 0;
}
