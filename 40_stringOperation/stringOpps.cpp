#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main (int argc, char *argv[]) {
  
  string word = "testing";
  cout << "index of 0: " << word[0] << endl;

  word[1] = 'i';

  cout << word << endl;

  // concatenation
  string word2 = word + "in";
  cout << word2 << endl;

  string word3 = " the Test";
  word2.append(word3);
  cout << word2 << endl;

  string word4 = "alright";
  word2 += " " + word4;
  cout << word2 << endl;

  return 0;
}
