#include <iostream>
#include <string>
using namespace std;
#include "student.h"
int main()
{
  cout << "EX07b: Search strings" << endl;
  string name;
  CStudent* m_std = new CStudent();
  if(m_std->name_last.find("BON")!=string::npos)
  {
    //m_std->name_first = "Klaus";
    name = m_std->name_first + " " + m_std->name_last;
  } else
  {
    cout << "Fehler: nicht gefunden" << endl;
  }
  cout << "Name:\t" << name << endl;
  delete(m_std);
  return 0;
}

