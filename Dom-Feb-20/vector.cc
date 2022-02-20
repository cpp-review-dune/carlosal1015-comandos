#include <iostream>
#include <cassert>  // for assert(...)
#include <vector>

void f1 (std::vector<int>& arg)
{
  std::cout << "f1: " << arg.size() << std::endl;
}

int main(int argc, char **argv)
{
  int n = 100;
  std::vector<double> vec1(n, 0.0);     // construct with size n and default value 0.0

  std::vector vec2{1.0, 2.0, 3.0};      // deduce type and size from initializer list [c++17]

  auto vec3 = vec1;                     // create copy of array

  for (const auto& arg : vec3)
  {
    std::cout << arg << std::endl;
  }

  assert(vec3.size() == 100);             // access number of elements (dynamic information)

  std::vector<int> vint = {2, 3, 5, 7, 11, 13, 17,};

  f1(vint);

  return 0;
}