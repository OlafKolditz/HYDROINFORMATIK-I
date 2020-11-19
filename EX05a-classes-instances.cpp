#include <iostream>
//using namespace std;
#include "student.h"
int main()
{
  CStudent *m_std_a; // pointer to an instance
//  CStudent m_std_a = new CStudent(); // static instance
  std::cout << "EX05a: Instances of classes" << std::endl;
  std::cout << "What have we created?\t : " << m_std_a << std::endl;
  std::cout << "What size has it?\t : " << sizeof(m_std_a) << std::endl;

  return 0;
}

/*
CStudent *m_std_b; // pointer to an instance
cout << "What have we created?\t : " << m_std_b << endl;
cout << "What size has it?\t : " << sizeof(m_std_b) << endl;
*/
