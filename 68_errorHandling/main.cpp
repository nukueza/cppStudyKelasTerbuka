#include <exception>
#include <iostream>
#include <stdexcept>

using std::cout;
using std::endl;

// 1. syntax error, kesalahan dalam menulis coding grammar structur dalam syntax system
// 2. linking error dimana prototype tanpa methodnya tak terlihat error tapi pas di compile error
// 3. non-error
// 4. runtime error error saat berjalan

int pembagian(int &num, int &denum)
{
  if (denum == 0)
  {
    // throw std::overflow_error("Error: pembagi nol");
    throw "Error: pembagi nol";
  }
  return num/denum;
}

int main (int argc, char *argv[]) {

  int a, b, c;

  while(true)
  {
    cout << "num: "; std::cin >> a;
    cout << "denum: "; std::cin >> b;

    try {
      c = pembagian (a, b);
      cout << c << endl;
    // } catch(std::exception &e){
    } catch(const char *e){
      // cout << e.what() << endl;
      cout << e << endl;
    }

  }

  cout << "akhir dari program" << endl;

  return 0;
}

