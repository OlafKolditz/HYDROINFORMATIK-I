#include <iostream>  // for using cout
#include <fstream>   // for using ifstream / ofstream
#include <string>    // for using string
using namespace std; // for std functions

#define MAX_ZEILE 100

int main(int argc , char *argv [])
//int main()
{
  //----------------------------------------------------------------
  cout << "EX06d-io-converter: A simple converter" << endl;
  //----------------------------------------------------------------
  ifstream input_file;                 // Instance of class ifstream
  //input_file.open("coordinates.txt");   // Open file "text_file.txt"
  input_file.open(argv [1]); 
  ofstream output_file;                // Instance of class ifstream
  //output_file.open("output_file.txt"); // Open file "text_file.txt"
  output_file.open(argv [2]); 
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

