#include <iostream>

using std::cout;
using std::endl;

void displayArr(int *ptrArray, int row, int col);

int main (int argc, char *argv[]) {

  // int array[2][2] = { 1, 2, 3, 4};
  const int row = 2;
  const int col = 2;
  int array[row][col] = { 1, 2, 3, 4};

  cout << array[0][0] << " " << array[0][1] << endl;
  cout << array[1][0] << " " << array[1][1] << endl;

  cout << endl;

  displayArr(*array, 2, 2);
  
  return 0;
}

void displayArr(int *ptrArray, int row, int col)
{
  int index = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << *ptrArray + index << " ";
      index++;
    }
    cout << endl;
  }
}
