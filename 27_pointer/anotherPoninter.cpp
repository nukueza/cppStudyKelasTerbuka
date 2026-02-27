#include <iostream>

using std::cout;
using std::endl;

int main (int argc, char *argv[]) {

  int num = 5;
  int *p = &num;

  cout << *p << endl;
  cout << &num << endl;
  cout << p << endl;

  *p = 4;
  cout << *p << endl;
  cout << &num << endl;
  cout << p << endl;

  int num2 = 10;
  p = &num;

  //cout << *p << endl;
  // cout << p << endl;
  // cout << &num << endl;
  // cout << &num2 << endl;

  cout << "pointer address: " << p << endl;

  // safe way to check before dereferending
  if (p == nullptr)
    cout << "Warning: pointer is null! do not use *p." << endl;
  else
    cout << "safe to read: " << *p << endl;

  if (p == &num)
    cout << "Your num: " << *p << endl;
  else if (p == &num2)
    cout << "Your num: " << *p << endl;
  else
    cout << "you point to null, there is no value to show" << endl;
  

  return 0;
}
