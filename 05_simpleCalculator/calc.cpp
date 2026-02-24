#include <iostream>

int main (int argc, char *argv[]) {
  using std::cout;
  using std::cin;
  using std::endl;

  float a, b;
  char sign;
  float sum = 0;

  cout << "calculator ver.1" << endl;

  cout << "enter num a: ";
  cin >> a;
  cout << "enter num b: ";
  cin >> b;
  cout << "enter operation(+, - , /, *): ";
  cin >> sign;

  switch(sign){
    case '+':
      sum = a + b;
      break;
    case '-':
      sum = a - b;
      break;
    case '/':
      if (b == 0){
        cout << "Error: Division by zero is not allowed." << endl;
        return 1;
      }
      else {
        sum = a / b;
      }
      break;
    case '*':
      sum = a * b;
      break;
    default:
      cout << "the operation are not found";
      break;
  }

  cout << a << " "<< sign << " "<< b << " = "<< sum << endl;

  return 0;
}
