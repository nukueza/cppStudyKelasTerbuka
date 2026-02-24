#include <iostream>

int main (int argc, char *argv[]) {
  using std::cout;
  using std::endl;
  using std::string;

  string cat = "meow";
  cout << "for loops 1" << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << cat << endl;
  }

  cout << "\n for loop 2" << endl;
  for (int i = 0; i <= 10; i += 2)
  {
    cout << i << endl;
  }

  cout << "\n for loop 3" << endl;
  for (int i = 10; i >= 1; i--)
  {
    cout << i << endl;
  }

  cout << "\n for loop 4" << endl;
  int total = 0;
  for (int i = 0; i <= 10; i++, total += i) // compound
  {
    // total += i;
    cout << i << " || " << total << endl;
  }

  return 0;
}
