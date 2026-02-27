#include <array>
#include <iostream>

using std::cout;
using std::endl;


int main (int argc, char *argv[]) {

  int arrayNum[5] = { 6, 4, 2, 9, 7};

  // array<int, 5> arrayNum = { 6, 4, 2, 9, 7}; 
  //
  // for (int num : arrayNum)
  // {
  //   cout << "address: " << &num << " num: " << num << endl;
  //   num = 1; // it won't change anything
  // }
  //
  // cout << endl;
  //
  // for (int &numRef : arrayNum)
  // {
  //   cout << "address: " << &numRef << " num: " << numRef << endl;
  //   numRef += numRef;
  // }

  int length = sizeof(arrayNum) / sizeof(arrayNum[0]);
  int total = 0;
  int min= arrayNum[0];
  int max = arrayNum[0];

  for (int i = 0; i < length; i++)
  {
    cout << arrayNum[i] << endl;
    total += arrayNum[i];
    if (min < arrayNum[i])
      min = arrayNum[i];
    if (max > arrayNum[i])
      max = arrayNum[i];
  }

  cout << "total of an array: " << total << endl;
  cout << "min: " << min << endl;
  cout << "max: " << max << endl;
    
  return 0;
}
