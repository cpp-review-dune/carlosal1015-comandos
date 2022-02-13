#include <iostream>

double square (double x);

auto main(int argc, char **argv) -> int
{
  std::cout << "Hola mundo"
            << square(2.8)
            << std::endl;

  return 0;
}

double square (double x)
{
  return x * x;
}