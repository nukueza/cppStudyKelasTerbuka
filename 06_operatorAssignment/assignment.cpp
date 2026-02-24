#include <iostream>

int main (int argc, char *argv[]) {

  int a = 10;
  a += 4;
  a++;

  // dikurangi 3
  a -= 3;

  // dikali 3
  a *= 3;

  // dibagi 2
  a /= 2;

  a %= 3;


  std::cout << a << std::endl;
  
  return 0;
}
