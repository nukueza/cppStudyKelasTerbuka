#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct actor{
  string name;
  int born;
};

struct Film {
  string judul;
  string genre;
  int tahun;
  actor actress1;
  actor actress2;
};

int main (int argc, char *argv[]) {

  actor actress1, actress2;
  Film film1;

  // actor
  actress1.name = "Johnny boy";
  actress1.born = 1880;

  actress2.name = "Tesuka Joe";
  actress2.born = 1887;

  // film
  film1.judul = "The ask alot";
  film1.genre = "Documenter";
  film1.tahun = 2024;
  film1.actress1 = actress1;
  film1.actress2 = actress2;

  cout << film1.judul << endl;
  cout << film1.actress1.name << endl;
  
  return 0;
}
