#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::array;

const int rows = 2;
const int cols = 3;

void displayArr(array<array <int, cols>, rows> &num);

int main (int argc, char *argv[]) {

  array<array <int, cols>, rows>  num = { 1, 2, 3, 4, 5, 6 };

  displayArr(num);
  
  return 0;
}

void displayArr(array<array <int, cols>, rows> &nums)
{
  for (array <int, cols> row : nums)
  {
    for (int col : row )
    {
      cout << col << " ";
    }
    cout << endl;
  }
}
