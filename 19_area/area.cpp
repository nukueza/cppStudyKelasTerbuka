#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

double RectangleArea(double length, double width)
{
  return length * width;
}

double CircleArea(double r)
{
  const double PI = 3.14159;
  double sum = PI * r * r;
  return sum;
}

void ShowResult(double r)
{
  cout << "Your circle area: " << CircleArea(r) << endl;
}

void ShowResult(double length, double width)
{
  cout << "Your Rectangle Area: "<< RectangleArea(length, width) << endl;
}

int main (int argc, char *argv[]) {

  double length, width, radius;
  string input;

  while (true)
  {
    cout << "what do you want to calculate (rect/circle) or 'q' to quit: "; cin >> input;
    if (input == "rect")
    {
      cout << "Input length: "; cin >> length;
      cout << "Input width: "; cin >> width;
      ShowResult(length, width);
    }
    else if(input == "circle")
    {
      cout << "Input the radius: "; cin >> radius;
      ShowResult(radius);
    }
    else if(input == "q")
    {
      cout << "program stop" << endl;
      break;
    }
    else {
      cout << "please input rect, circle, or q" << endl;
    }
  }

  return 0;
}
