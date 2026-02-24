#include <iostream>

int main (int argc, char *argv[]) {
  int a = 3;
  int b = 2;

  bool sum;

  //not
  sum = !(a == 3);

  // and : kedua nilai harus benar
  std::cout << "untuk and" << std::endl;
  sum = (a == 3) and (b == 2); // true and true
  std::cout << sum << std::endl;

  sum = (a == 4) and (b == 2); // false and true
  std::cout << sum << std::endl;

  sum = (a == 3) && (b == 3); // true and false
  std::cout << sum << std::endl;

  sum = (a == 4) && (b == 3); // false and false
  std::cout << sum << std::endl;

  // or : salah satu nilai benar
  std::cout << "untuk or" << std::endl;
  sum = (a == 3) or (b == 2); // true or true
  std::cout << sum << std::endl;

  sum = (a == 4) or (b == 2); // false or true
  std::cout << sum << std::endl;

  sum = (a == 3) || (b == 3); // true or false
  std::cout << sum << std::endl;

  sum = (a == 4) || (b == 3); // false or false
  std::cout << sum << std::endl;
  
  return 0;
}
