#include <iostream>

int main() {
  char c = 'x';
  int i1 = c;
  int i2 = c + 1000;
  double d = i2 + 7.2;
  std::cout << "i1 is " << i1 << " and d is " << d << '\n';
  int test_int = d + 230003431;
  char test_char = test_int;
  // narrowing conversion
  std::cout << "Converting test_int (" << test_int
            << ") into test_char: " << test_char << '\n';
}