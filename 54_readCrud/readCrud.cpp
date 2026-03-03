#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::getline;

int main (int argc, char *argv[]) {

  std::ifstream myFile;
  string output, buffer, h1, h2;
  int num;
  string nama;

  // ios::in
  // ios::ate = mulai dari akhir file
 
  myFile.open("data.txt");
  // always check if the file opened successfully
  if (!myFile.is_open())
  {
    std::cerr << "Error: Could not open data.txt" << endl;
    return 1;
  }
  while(getline(myFile, buffer))
  {
    output.append("\n" + buffer);
    if (buffer == "data")
       break;
  }

  if (getline(myFile, buffer))
  {
    cout << output << endl;

    //split
    std::stringstream ss(buffer);
    ss >> h1 >> h2;

    cout << h1 << "\t" << h2 << endl;
  }

  int totalStudent = 0;

  while(myFile >> num >> nama)
  {
    cout << num << "\t" << nama << endl;
    totalStudent++;
  }

  cout << "total: " << totalStudent << endl;

  myFile.close();
  
  return 0;
}
