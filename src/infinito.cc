#include <iostream>
#include <cmath>

int main(int argc, char **argv)
{
  double x = 0.1;
  double y = x/0.0;
  double z = 0.0/0.0;

  std::cout << std::isinf(y) // true (1)
            << std::endl
            << std::isinf(x) // false (0)
            << std::endl
            << std::isnan(z) // true (1)
            << std::endl;
  
  return 0;
}