#include <iostream>
#include <vector>

class Base{
  Base();
};

int main(int argc, char **argv)
{
  auto x = 3+4;           // deduce the type from the expression: x <-- int <-- 3+4
  std::cout << x << std::endl;

  auto y = long{3+4};     // explicitly committing to a type: y <-- long
  std::cout << y << std::endl;

  auto z{3+4};            // same as variable x: z <-- int                      [C++17]
  
  std::cout << z << std::endl;

  auto z1 = {3+4};        // ATTENTION: This gives 'std::initializer_list<int>' [C++17]
  auto const z2 = 3+4;    // type of z2 is 'int const'
  auto& a = x;            // type of a is 'int&'
  decltype(auto) y2 = a;

  std::cout << "x = " << a << std::endl;
  std::cout << "x = " << y2 << std::endl;

  decltype(auto) x2 = a;  // type of x2 is 'int&'
  decltype(a) x3 = a;     // extract the type from the expression 'a'
  auto const& x4 = x;     // type of x4 is 'int const&'

  std::cout << x2 << " " << x3 << " " << x4 << std::endl;

  return 0;
}