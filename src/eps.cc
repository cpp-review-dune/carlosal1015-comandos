#include <iostream>
#include <limits>

int main(int argc, char **argv)
{
  double const eps = std::numeric_limits<double>::epsilon();
  std::cout << "eps: " << eps << std::endl;
  double const min = std::numeric_limits<double>::min();
  std::cout << "min valor de un double: " << min << std::endl;
  int const ulp = 2;

  double x = 3.12123;
  double y = 5.62343;
  std::cout << std::abs(x + y) << std::endl;
  std::cout << std::abs(x + y) * ulp << std::endl;
  std::cout << eps * std::abs(x + y) * ulp << std::endl;
  std::cout << std::abs(x - y) << std::endl;
  
  bool b = std::abs(x-y) <= eps * std::abs(x+y) * ulp || std::abs(x-y) < min;
  std::cout << b << std::endl;
}