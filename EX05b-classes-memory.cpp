#include <iostream>
using namespace std;
#include "student.h"
int main()
{
  cout << "EX05b: Instances of classes" << endl;
  //CStudent m_std; // instance
  CStudent *m_std = new CStudent(); // instance
  cout << "CStudent *m_std = new CStudent();" << endl;
  cout << "*m_std: What have we created?\t\t : *m_std" << endl;
  cout << "*m_std: What size has it?\t\t : " << sizeof(*m_std) << endl;
  cout << "*m_std: What have we created?\t\t : &m_std" << endl;
  cout << "&m_std: What have we created?\t\t : " << &m_std << endl;
  cout << "&m_std: What size has it?\t\t : " << sizeof(&m_std) << endl;
  cout << " m_std: What have we created?\t\t : " << m_std << endl;
  cout << " m_std: What size has it?\t\t : " << sizeof(m_std) << endl;
  //delete &m_std;
  return 0;
}

