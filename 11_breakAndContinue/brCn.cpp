#include <iostream>

int main (int argc, char *argv[]) {
  using std::cout;
  using std::endl;
  
  for (int i = 0; i <= 10; i++)
  {
    if (i == 5)
      //break;
      continue; // skipping number 5
    
    cout << i << endl;
  }

  return 0;
}
