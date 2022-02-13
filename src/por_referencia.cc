#include <iostream>
#include <cassert>

int f (int &m)  // reference argument
{
  m = 4;        // changing m, changes the variable pointed to
  return m;
}

int g (int* m)    // reference argument
{
  *m = 4;         // changing m, changes the variable pointed to
  return *m;
}

int main()
{
  /*
  int  m = 5;
  std::cout << f(m) << std::endl;
  int  n = f(m);  // m is changed by f to 4
  assert(m == 4); // Simple error checking
  int n2 = f(5);  // ERROR! cannot bind reference to value
  */
  int  m = 5;
  std::cout << m << std::endl;
  int  n = g(&m);   // m is changed by f to 4
  std::cout << n << std::endl;

  return 0;
}