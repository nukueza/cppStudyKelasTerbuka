#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main (int argc, char *argv[]) {

  // creating array
  int num[5] = { 0, 1, 2, 3, 4 };

  cout << &num[0] << " value: " << num[0] << endl;
  cout << &num[1] << " value: " << num[1] << endl;
  cout << &num[2] << " value: " << num[2] << endl;
  cout << &num[3] << " value: " << num[3] << endl;
  cout << &num[4] << " value: " << num[4] << endl;

  int *ptr = num;
  *(ptr + 0) = 6;

  num[3] = 7;

  cout << endl;
  cout << &num[0] << " value: " << num[0] << endl;
  cout << &num[1] << " value: " << num[1] << endl;
  cout << &num[2] << " value: " << num[2] << endl;
  cout << &num[3] << " value: " << num[3] << endl;
  cout << &num[4] << " value: " << num[4] << endl;

  cout << endl;

  cout << "size of array: " << sizeof(num) << endl;
  cout << "member of array: " << sizeof(num) / sizeof(int) << endl;

  return 0;
}
