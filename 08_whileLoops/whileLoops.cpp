#include <iostream>

int main (int argc, char *argv[]) {
  using std::cout;
  using std::endl;
  using std::string;

  string cat = "meow";
  int num = 0;

  while(num < 3)
  {
    cout << cat << endl;
    num++;
  }

  return 0;
}
