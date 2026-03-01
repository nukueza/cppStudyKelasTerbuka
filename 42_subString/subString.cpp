#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main (int argc, char *argv[]) {

  string word1 = "The quick brown fox jumps over the lazy dog power ranger in the story";
  string word2 = "Pack my box with five dozen liquor jugs";

  cout << "1: " << word1 << endl;
  cout << "2: " << word2 << endl;

  // substring
  cout << word1.substr(16, 3) << endl;
  cout << word2.substr(8, 13) << endl;

  // find
  cout << word1.find("fox") << endl;
  cout << word2.find("box") << endl;

  int a = word1.find("er");
  cout << a << endl;

  int b = word1.find("er", b + 1);
  cout << b << endl;

  int c = word1.rfind("st");
  cout << c << endl;
  
  return 0;
}
