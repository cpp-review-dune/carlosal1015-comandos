#include <iostream>
#include <concepts>

int main(int argc, char **argv)
{
  std::integral auto x{3+4};

  std::cout << x << std::endl;

  //std::floating_point auto y{3+4};

  return 0;
}