#include <iostream>
#include <bitset>
#include <string>

using std::cout;
using std::endl;
using std::string;

void displayBit(unsigned short n, string name)
{
  cout << name << " = " << std::bitset<8>(n) << endl;
}

int main (int argc, char *argv[]) {

  unsigned short a = 6;
  unsigned short b = 10;
  unsigned short c;

  cout << "& - AND bitwise AND" << endl;
  c = a & b;

  displayBit(a, "a");
  displayBit(b, "b");
  displayBit(c, "c");

  cout << endl;

  cout << "| - OR bitwise OR" << endl;
  c = a | b;

  displayBit(a, "a");
  displayBit(b, "b");
  displayBit(c, "c");

  cout << endl;
  cout << "^ - XOR bitwise OR" << endl;
  c = a ^ b;

  displayBit(a, "a");
  displayBit(b, "b");
  displayBit(c, "c");

  cout << endl;
  cout << "~ - NOT bitwise NOT" << endl;
  c = ~a;

  displayBit(a, "a");
  displayBit(b, "b");
  displayBit(c, "c");

  cout << endl;
  cout << "<< - bitwise SHL" << endl;
  c = a << 1;

  displayBit(a, "a");
  displayBit(b, "b");
  displayBit(c, "c");

  cout << endl;
  cout << ">> - bitwise SHL" << endl;
  c = a >> 1;

  displayBit(a, "a");
  displayBit(b, "b");
  displayBit(c, "c");

   return 0;
}

// Bitwise operator
// & AND Bitwise AND
// | OR Bitwise inclusive OR
// ^ XOR Bitwise exclusive OR
// ~ NOT
// << SHL Shift bits left
// >> SHR Shift bits right
