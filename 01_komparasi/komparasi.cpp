#include <iostream>

int main (int argc, char *argv[]) {
  int a = 0;
  int b = 1;

  bool sum1, sum2, sum3, sum4;

  sum1 = (a == b);
  sum2 = (a != b);
  sum3 = (a < b);
  sum4 = (a > b);

  std::cout << sum1 << std::endl;
  std::cout << sum2 << std::endl;
  std::cout << sum3 << std::endl;
  std::cout << sum4 << std::endl;
  
  return 0;
}
