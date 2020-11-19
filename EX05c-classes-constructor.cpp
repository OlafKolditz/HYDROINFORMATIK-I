#include <iostream>
using namespace std;
#include "student.h"
int main()
{
  CStudent* m_std = new CStudent(); // instance using constructor
  cout << "EX05c: Constructor of class CStudent" << endl;
  cout << "What have we created? m_std\t : " << m_std << endl;
  cout << "What size has it?\t\t : " << sizeof(m_std) << endl;
  cout << "What have we created? &m_std\t : " << &m_std << endl;
  cout << "What size has it?\t\t : " << sizeof(&m_std) << endl;

  cout << "First name:\t " << m_std->name_first << endl;
  cout << "Last name:\t " << m_std->name_last << endl;
  return 0;
}

