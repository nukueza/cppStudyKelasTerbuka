#include <iostream>
#include <algorithm>
#include <array>

using std::cout;
using std::endl;
using std::array;

const size_t arraySize = 10;
void displayArr(array<int, arraySize> &nums);
void displayArr(array<char, arraySize> &nums);

int main (int argc, char *argv[]) {

  array<int, arraySize> num = { 8, 2, 5, 3 , 0, 9, 4, 7, 1, 6 };
  array<char, arraySize> character = { 'j', 'u', 'a', 'l', 'k', 'q', 's', 'w', 'm', 'p' };

  int lookAt;
  bool find;

  displayArr(num);

  cout << "What number are you looking for: "; std::cin >> lookAt;

  std::sort(num.begin(), num.end());
  find = std::binary_search(num.begin(), num.end(), lookAt);
  if (find)
  {
    cout << "the number " << lookAt << " is exist." << endl;
  }
  else {
    cout << "the number " << lookAt << " not exist." << endl;
  }

  return 0;
}

void displayArr(array<int, arraySize> &nums)
{
  cout << "Array: ";
  for (int &num : nums)
    cout << num << " ";
  cout << endl;
}

void displayArr(array<char, arraySize> &nums)
{
  cout << "Array: ";
  for (char &num : nums)
    cout << num << " ";
  cout << endl;
}
