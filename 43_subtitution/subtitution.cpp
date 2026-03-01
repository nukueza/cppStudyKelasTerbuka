#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main (int argc, char *argv[]) {

  string word1 = "The quick brown fox jumps over the lazy dog power ranger in the story";
  string word2 = "Pack my box with five dozen liquor jugs";

  cout << word1 << endl;
  cout << word2 << endl;

  cout << endl;

  cout << "swap string" << endl;
  word1.swap(word2);

  cout << word1 << endl;
  cout << word2 << endl;

  cout << endl;
  // replace
  cout << "replace" << endl;
  word2.replace(4, 5, "testing");
  cout << word2 << endl;

  // replace with find
  cout << endl;

  word1.replace(word1.find("dozen"), 5, "gaban");
  cout << word1 << endl;

  cout << endl;
  // insert
  word1.insert(word1.find("box"),"box ");
  cout << word1 << endl;
  
  return 0;
}
