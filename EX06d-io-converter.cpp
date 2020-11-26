#include <iostream>  // for using cout
#include <fstream>   // for using ifstream / ofstream
#include <string>    // for using string
using namespace std; // for std functions

#define MAX_ZEILE 100

int main()
{
  //----------------------------------------------------------------
  //cout << "-------------------------------------------------------------------\n";
  //system("pwd > out.txt");
  //system("time");
  //cout << "-------------------------------------------------------------------\n";
  cout << "E624: a simple converter" << endl;
  //----------------------------------------------------------------
  ifstream input_file;                 // Instance of class ifstream
  input_file.open("input_file.txt");   // Open file "text_file.txt"
  ofstream output_file;                // Instance of class ifstream
  output_file.open("output_file.txt"); // Open file "text_file.txt"
  //----------------------------------------------------------------
  char line[MAX_ZEILE];
  int i=1;
  int summe=0;
  while(input_file.getline(line,MAX_ZEILE))
  {
    if (i<0)
      continue;
    output_file << i << "," << line << endl;
    summe += i;
    i++;
  }
  output_file << "Summe der Zeilen ist: " << i-1 << endl;
  cout << "Summe der Zeilen ist: " << i-1 << endl;
  //----------------------------------------------------------------
  return 0;
}

