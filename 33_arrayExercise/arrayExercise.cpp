#include <iostream>
#include <array>

using std::array;

using std::cout;
using std::endl;
using std::cin;

int main (int argc, char *argv[]) {

  array<int, 10> grade;

  cout << "Student Grade" << endl << endl;

  for (int i = 0; i < grade.size() + 1; i++)
  {
    cout << "jumlah mahasiswa dengan nilai ";
    if (i == 0)
    {
      cout << "0 - 9: "; 
    }
    else if ( i == 10)
    {
      cout << "100  : "; 
    }
    else {
      cout << i * 10 << "-" << (i * 10) + 9 << ": "; ;
    }
    cin >> grade[i];
  }

  cout << endl;

  cout << "graph" << endl;

  for (int i = 0; i < grade.size() + 1; i++)
  {
    if (i == 0)
    {
      cout << "0 - 9: "; 
    }
    else if ( i == 10)
    {
      cout << "100  : "; 
    }
    else {
      cout << i * 10 << "-" << (i * 10) + 9 << ": "; ;
    }

    for (int j = 0; j < grade[i]; j++)
    {
      cout << "*";
    } 
    cout << endl;
  }

  return 0;
}
