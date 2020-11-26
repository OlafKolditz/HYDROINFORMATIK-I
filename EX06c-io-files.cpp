#include <iostream>  // for using cout
#include <fstream>   // for using ifstream / ofstream
#include <string>    // for using string
using namespace std; // for std functions

int main()
{
  //----------------------------------------------------------------
  ifstream input_file;                 // Instance of class ifstream
  input_file.open("input_file.txt");   // Open file "text_file.txt"
  string my_string;                    // Instance of class string
  input_file >> my_string;             // Reading a string from file
  cout << my_string.data() << endl;    // Output of string to screen
  //----------------------------------------------------------------
  ofstream output_file;                // Instance of class ofstream
  output_file.open("output_file.txt"); // Open file "text_file.txt" ,ios::app
//  output_file << my_string.data() << endl; // Writing a string to a file
  output_file << my_string << endl; // Writing a string to a file
  //----------------------------------------------------------------
  // Dateien werden geschlossen
  input_file.close();
  output_file.close();
  return 0;
}

