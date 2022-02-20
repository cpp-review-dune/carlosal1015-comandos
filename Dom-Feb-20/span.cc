#include <iostream>
#include <cassert>  // for assert(...)
#include <span>
#include <array>

int main()
{
  int a[] { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
  int b[] { 8, 7, 6 };
  
  int* b_ptr = b;
  //std::array<int, 5> array1 = { 1, 2, 3, 4, 5};
  //int* c_ptr = std::array<int, 5>

  for (const auto& e : b)
  {
    std::cout << e << std::endl;

  }

  for (int i = 0; i < 3; i++)
  {
    std::cout << b_ptr[i] << std::endl;
  }

  auto a_span = std::span{a};

  std::cout << "------------------------" << std::endl;

  for (const auto& e : a_span)
  {
    std::cout << e << std::endl;
  }

    std::cout << "------------------------" << std::endl;

  auto b_span = std::span{b_ptr, 3};   // or: std::span<int,3>{b_ptr}

  for (const auto& e : b_span)
  {
    std::cout << e << std::endl;

  }

  return 0;
}


/*
assert(a_span.size() == 9);
assert(b_span.size() == 3);
*/