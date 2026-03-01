#include <iostream>
#include <array>
#include <algorithm>

using std::cout;
using std::endl;

const size_t arraySize = 10;
void displayArr(std::array<int, arraySize> &nums);
void displayArr(std::array<char, arraySize> &nums);

int main (int argc, char *argv[]) {

  std::array<int, arraySize> num = { 8, 2, 5, 3 , 0, 9, 4, 7, 1, 6 };
  std::array<char, arraySize> character = { 'j', 'u', 'a', 'l', 'k', 'q', 's', 'w', 'm', 'p' };

  displayArr(num);
  displayArr(character);

  cout << endl;

  std::sort(num.begin(), num.end());
  std::sort(character.begin(), character.end());

  displayArr(num);
  displayArr(character);

  return 0;
}

void displayArr(std::array<int, arraySize> &nums)
{
  cout << "Array: ";
  for (int &num : nums)
    cout << num << " ";
  cout << endl;
}

void displayArr(std::array<char, arraySize> &nums)
{
  cout << "Array: ";
  for (char &num : nums)
    cout << num << " ";
  cout << endl;
}
