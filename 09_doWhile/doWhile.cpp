#include <iostream>

int main (int argc, char *argv[]) {
  using std::cout;
  using std::endl;
  using std::cin;
  using std::string;

  string cat = "meow";
  int num = 0;

  do {
    cout << cat << endl;
    num++;
  }while (num < 3);

  cout << "program exit..." << endl;
  cin.get();

  return 0;
}
