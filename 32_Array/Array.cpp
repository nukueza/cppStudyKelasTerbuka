#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::array;

int main (int argc, char *argv[]) {

  array<int, 5> num;

  for (int i = 0; i <= 4; i++)
  {
    num[i] = i;
    cout << "num: [" << i << "] = " << num[i] << " address: " << &num[i] << endl;
  }

  cout << num.size() << endl;

  cout << "address [0]: " << &(*num.begin()) << endl;

  cout << "address [4]: " << &(*num.end()) << endl;

  cout << "num [2]: " << num.at(2) << endl;
  
  return 0;
}
