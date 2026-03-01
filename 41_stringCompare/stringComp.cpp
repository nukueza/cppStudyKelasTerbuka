#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main (int argc, char *argv[]) {

  string input;
  string word = "test";

  cout << "enter the word: "; std::cin >> input;

  if (input == word)
    cout << "you shall pass" << endl;
  else
  {
    cout << "can not pass."<< endl;
  }
  
  return 0;
}
