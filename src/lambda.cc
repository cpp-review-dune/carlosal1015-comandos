#include <iostream>

double cube(const double x = 10)
{
  auto square = [] (const double y) { return y*y; };
  return square(x) * x;
}

int main(int argc, char **argv)
{
  double alpha = 0.5;

  std::cout << cube() << std::endl;

  return 0;
}