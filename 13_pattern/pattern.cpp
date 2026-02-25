#include <iostream>

int main (int argc, char *argv[]) {
  using std::cout;
  using std::cin;
  using std::endl;

  int n;
  cout << "enter n: "; cin >> n;

  cout << '\n'; 

  cout << "pattern 1" << endl;

  for (int i = 0; i < n; i++)
  {
    for(int j = 0; j <= i; j++)
      cout << "#";
    cout << '\n'; 
  }

  cout << '\n';

  cout << "pattern 2" << endl;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
      cout << "#";
    cout << '\n';
  }

  cout << '\n';

  cout << "pattern 3" << endl;

  for (int i = 0; i < n; i++)
  {
    for (int k = 0; k < i; k++)
      cout << ' ';
    for (int j = 0; j < n - i; j ++)
      cout << '#';
    cout << '\n';
  }

  cout << '\n';

  cout << "pattern 4" << endl;

  for (int i = 0; i < n; i++)
  {
    for (int k = 0; k < n - i - 1; k++)
      cout << ' ';
    for (int j = 0; j < i + 1; j++)
      cout << '#';
    cout << '\n';
  }

  cout << endl;

  cout << "pattern 5" << endl;

  for (int i = 0; i < n; i++)
  {
    for (int k = 0; k < n - i - 1; k++)
      cout << ' ';

    for (int j = 0; j < 2 * i + 1; j++)
      cout << '#';

    cout << endl;
  }

  cout << '\n';

  cout << "pattern 6" << endl;

  for (int i = 0; i < n; i++)
  {
    for (int k = 0; k < i; k++)
      cout << ' ';

    for (int j = 0; j < (2 * n - (2 * i + 1)); j++)
      cout << '#';

    cout << endl;
  }

  cout << endl;

  cout << "pattern 7" << endl;

  int totalRows = 2 * n - 1;

  for (int i = 0; i < totalRows; i++)
  {
    // this formula 'mirrors' the index
    // if n = 4, rowVal becomes: 0, 1, 2, 3, 2, 1, 0
    int rowVal = i < n ? i : (totalRows - 1 - i);

    // spaces (n - 1 - rowVal)
    for (int j = 0; j < n - 1 - rowVal; j++)
      cout << ' ';

    // hastags ( 2 * rowval + 1)
    for (int k = 0; k < 2 * rowVal + 1; k++)
      cout << '#';

    cout << endl;
  }
  
  return 0;
}
