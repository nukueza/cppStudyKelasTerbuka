#include <iostream>
#include <string>

using std::cout;
using std::endl;

// void Print(int data)
// {
//   cout << data << endl;
// }
//
// void Print(char data)
// {
//   cout << data << endl;
// }
//
// void Print(double data)
// {
//   cout << data << endl;
// }

template<typename T>
void print(T data)
{
  cout << data << endl;
}

template<typename T>
int toInt(T data)
{
  return int(data);
}

template<typename T, typename U>
T max(T data1, U data2){
  return (data1 > data2) ? data1: data2 ;
}

int main (int argc, char *argv[]) {

  print(3);
  print('t');
  print(3.5234);

  print(toInt(10.535));

  // print<int>(10.15); implicit from int to double

  cout << max(5, 3);
  
  return 0;
}
