#include <iostream>

using std::cout;
using std::endl;

int RectArea(int s);
int RectArea(int width, int length);
int RectArea(int width, int length, int height);

int main (int argc, char *argv[]) {

  cout << RectArea(2, 3) << endl;
  cout << RectArea(4) << endl;
  cout << RectArea(2, 3, 4) << endl;
  
  return 0;
}

int RectArea(int s)
{
  return s * s;
}

int RectArea(int width, int length)
{
  return width * length;
}

int RectArea(int width, int length, int height)
{
  return width * length * height;
}

