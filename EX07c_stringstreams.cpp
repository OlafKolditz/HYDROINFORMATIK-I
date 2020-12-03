#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
  cout << "-------------------------------------------------------------------\n";
  system("time");
  cout << "-------------------------------------------------------------------\n";
  cout << "EX07b: Stringstreams" << endl;
  string name;
  string name_first;
  string name_last;
  stringstream input_line;
  cout << "Geben Sie bitte Ihren Namen (Vor- und Nachnamen) ein: ";
  getline(cin,name);
  input_line.str(name);
  // Der Name wird nun zerlegt
//int dummy;
  input_line >> name_first;
  cout << "Vorname:\t" << name_first << endl;
  input_line >> name_last;
  cout << "Nachname:\t" << name_last << endl;
  input_line.clear();
  cout << "-------------------------------------------------------------------\n";
  return 0;
}

