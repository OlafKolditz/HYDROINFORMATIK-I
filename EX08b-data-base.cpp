#include <iostream>  // for using cout
#include <fstream>   // for using ifstream / ofstream
#include <string>    // for using string
#include <vector>    // for using vectors
#include <list>      // for using lists
#include "student.h" // for using CStudents
using namespace std; // for std functions

#define MAX_ZEILE 256
bool STDRead(ifstream&);
void STDSort();
vector<CStudent*>std_vector;

int main()
{
  //----------------------------------------------------------------
  cout << "EX08b data base: an object-oriented DB read function" << endl;
  //----------------------------------------------------------------
  // 1 File handling
  ifstream input_file; // ifstream instance
  //  input_file.open("HydroInformatics2013.txt");
  input_file.open("data_base.txt");
  if(!input_file.good())               // Check is file existing
  {
      //cout << input_file. << endl;
      cout << "! Error: input file could not be opened" << endl;
    return 0;
  }
  //----------------------------------------------------------------
  // 2 Read data base
  STDRead(input_file);
  //----------------------------------------------------------------
  STDSort();
  return 0;
}

/**************************************************************************
STDLib-Method: 
Task: Reading all STD objects
06/2009 OK Implementation
**************************************************************************/
bool STDRead(ifstream& std_file)
{
  //----------------------------------------------------------------------
  char line[MAX_ZEILE];
  string line_string;
  ios::pos_type position;
  CStudent* m_std = NULL;
  //----------------------------------------------------------------------
//OK  STDDelete();  
  //----------------------------------------------------------------------
  // rewind the file
  std_file.seekg(0,ios::beg); 
  //----------------------------------------------------------------------
  // OBJ reading, keyword loop
  cout << "STDRead" << endl;
  while(!std_file.eof()) 
  {
    std_file.getline(line,MAX_ZEILE);
    line_string = line;
    if(line_string.find("#STOP")!=string::npos)
      break;
    if(line_string.find("#STUDENT")!=string::npos)
    {
      m_std = new CStudent();
      position = m_std->Read(std_file); // from E63
      std_vector.push_back(m_std);
      std_file.seekg(position,ios::beg);
    }
  } // eof
  //----------------------------------------------------------------------
  cout << "Number of data sets: " << std_vector.size() << endl;
  return true;
}

/**************************************************************************
STDLib-Method: 
Task: Sort STD objects alphabetically
07/2009 OK Implementation
**************************************************************************/
void STDSort()
{
  cout << "STDSort" << endl;
  //----------------------------------------------------------------
  int i;
  CStudent* m_std = NULL;
  list<string>name_list;
  for(i=0;i<(int)std_vector.size();i++)
  {
    m_std = std_vector[i];
    name_list.push_back(m_std->name_first);
  }
  name_list.sort();
  //----------------------------------------------------------------
  // 
  int pos = 0;
  list<string>::const_iterator iterator;
  iterator = name_list.begin();
  string name_first;
  vector<CStudent*>std_vector_sorted;
  while(iterator != name_list.end()) 
  {
    name_first = *iterator;
    for(i=0;i<(int)std_vector.size();i++)
    {
      m_std = std_vector[i];
      if(m_std->name_first.compare(name_first)==0)
      {
        std_vector_sorted.push_back(m_std);
      }
    }
    ++iterator;
    pos++;
  }
  //----------------------------------------------------------------
  for(i=0;i<(int)std_vector_sorted.size();i++)
  {
    cout << std_vector_sorted[i]->name_first << endl;
  }
}
