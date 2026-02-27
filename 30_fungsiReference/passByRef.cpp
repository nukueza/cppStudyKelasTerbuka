#include <iostream>

using std::cout;
using std::endl;

// basically if you create a function you are passing the value

void changeValue(int x)
{
  x = 100;
}

int changeThisReturn(int x)
{
  return x = 100;
}

void changeWithRef(int& x)
{
  x = 100;
}

void checkAddress(int x)
{
  cout << "Clone address: " << &x << endl;
}

int main (int argc, char *argv[]) {
  
  int num = 5;
  changeValue(num); // the x from the changeValue won't get here
  cout << num << endl; // the output will be 5
  
  num = changeThisReturn(num); // trying to catcht with return
  cout << num << endl; // the output will 100
 
  changeWithRef(num);
  cout << num << endl;

  cout << "original address: " << &num << endl;
  checkAddress(num);
  
  return 0;
}

// so return is clone, let's say the num are 5GB and you return would have a copy that twice. a reference copies nothing.
