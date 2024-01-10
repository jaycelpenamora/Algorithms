#include <array>
#include <iostream>
#include <string>
int main() {
  std::array<int, 5> myarray;
  myarray[0] = 1;
  myarray[0] = 2;
  myarray[0] = 3;
  myarray[0] = 4;

  std::array<std::string, 5> data;
  data[0] = "Foo";
  data[1] = "Bar";
  data[2] = "Baz";
  data[3] = "Buzz";
  data[4] = "Fizz";
  std::cout << "Hello World!" << std::endl;
  return 0;
}
