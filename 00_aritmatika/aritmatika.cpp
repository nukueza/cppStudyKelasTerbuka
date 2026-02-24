#include <iostream>

int main (int argc, char *argv[]) {
  int a = 6;
  int b = 4;

  float sum;

  sum = a + b;
  std::cout << a << " + " << b << " = "<< sum << std::endl;

  sum = a - b;
  std::cout << a << " - " << b << " = "<< sum << std::endl;

  sum = a * b;
  std::cout << a << " * " << b << " = "<< sum << std::endl;

  sum =(float) a / b;
  std::cout << a << " / " << b << " = "<< sum << std::endl;

  sum = a % b;
  std::cout << a << " % " << b << " = "<< sum << std::endl;
  
  return 0;
}
