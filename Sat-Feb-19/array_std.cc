#include <iostream>
#include <array>

int main(int argc, char **argv)
{
std::array<double, 4> vec1 = {1.0, 2.0, 3.0, 4.0};  // explicit type and size
std::cout << vec1.size()
          << vec1.size()
          << std::endl;

  for(const auto& s: vec1)
        std::cout << s << ' ';
}

/*
std::array vec2{1.0, 2.0, 3.0};       // deduce type and size from initializer list [c++17]
auto vec3 = vec2;                     // create copy of array
static_assert(vec3.size() == 3);      // access number of elements (static information)
// ...
void f1 (std::array<int,3> arg);      // pass-by-value (copy)
void f2 (std::array<int,3>& arg);     // pass-by-reference
*/