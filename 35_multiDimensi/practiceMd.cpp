#include <iostream>

using std::cout;
using std::endl;

int main (int argc, char *argv[]) {
  
  int num[][3] = {{1 , 2, 3 }, { 4, 5 ,6 }, {7, 8, 9}, };

  int row = sizeof(num) / sizeof(num[0]);
  int col = sizeof(num[0]) / sizeof(num[0][0]);

  for (int i = 0; i < row; i++)
  {
    // cout << num[i] << endl; // printout the row address
    for (int j = 0; j < col; j++)
    {
      cout << num[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

void displayArr(int num)
{

}
