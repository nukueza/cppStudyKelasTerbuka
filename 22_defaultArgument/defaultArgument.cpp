#include <iostream>

using std::cout;
using std::endl;
using std::cin;

double CubeVolume(double s);
double CubeVolume(double width, double length, double height = 1); // default argument

int main (int argc, char *argv[]) {
  
  double result = CubeVolume(5);
  double result2 = CubeVolume(3, 4);
  cout << result << endl;
  cout << result2 << endl;
  return 0;
}

double CubeVolume(double s) // overload
{
  return s * s * s;
}

double CubeVolume(double width, double length, double height)
{
  return width * length * height;
}
