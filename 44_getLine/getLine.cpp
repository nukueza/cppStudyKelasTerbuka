#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main (int argc, char *argv[]) {

  string input;
  std::getline(std::cin, input);

  cout << "input: "<< input << endl;

  // total word input
  int pos = 0;
  int total = 0;

  while(true)
  {
    pos = input.find(" ", pos + 1);
    total++;
    if (pos < 0)
      break;
  }

  cout << "jumlah kata: " << total << endl;

  return 0;
}
