#include <array>
#include <iostream>
#include <string>
<<<<<<< HEAD

using std::string, std::cout, std::cin, std::endl;

class ExceptionInvalidInput : public std::exception {
private:
  int y;

public:
  ExceptionInvalidInput(int value) : y(value) {}
=======
using namespace std;

class ExceptionInvalidInput : public std::exception {
private:
  long long y;

public:
  ExceptionInvalidInput(long long value) : y(value) {}
>>>>>>> 2db0b99 (	modified:   compiled/euclid)

  const char *what() const noexcept override {
    std::string message = "Number nonpositive or zero: " + std::to_string(y);
    return message.c_str();
  }
};

long long gcd(long x, long y);

int main() {
<<<<<<< HEAD
  int m, n, result;

  cout << "Enter two non-positive integers\n";
  try {
    cin >> m >> n;
    if (m <= 0)
      throw ExceptionInvalidInput(m);
    if (n <= 0)
      throw ExceptionInvalidInput(n);
=======

  long long m, n, result;
  cout << "Enter two non-positive integers\n";
  try {
    cin >> m >> n;
    if (m < 0 || m == 0)
      throw ExceptionInvalidInput(m);
    if (n < 0 || n == 0)
      throw ExceptionInvalidInput(m);
>>>>>>> 2db0b99 (	modified:   compiled/euclid)
  } catch (ExceptionInvalidInput &e) {
    cout << e.what() << endl;
  }
  cout << "Calculating GCD of " << m << " and " << n << " step by step: \n";
  result = gcd(m, n);
  cout << "The GCD of " << m << " and " << n << " is " << result << endl;

  return 0;
}
<<<<<<< HEAD
int gcd(int x, int y) {
  if (y == 0)
    return x;
  int r = x % y;
=======
long long gcd(long x, long y) {
  if (y == 0)
    return x;
  long long r = x % y;
>>>>>>> 2db0b99 (	modified:   compiled/euclid)
  cout << x << " = " << y << " * " << x / y << " + " << x % y << endl;
  return gcd(y, r);
}
