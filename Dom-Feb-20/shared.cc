#include <iostream>

#include <cassert>
#include <memory>

int main(int argc, char **argv)
{
  { // block 1
  std::shared_ptr<int> ptr1 = std::make_shared<int>(5); // allocate memory for int, value 5
  std::cout << *ptr1 << std::endl;
  *ptr1 = 6;    // assign new value to memory
  std::cout << *ptr1 << std::endl;
  { // block 1.1
    std::shared_ptr<int> ptr2 = ptr1;     // share memory. ptr2 points to same address
    std::cout << *ptr2 << std::endl;
    assert(*ptr2 == 6);
  }                                       // end of block 1.1: ptr2 is deleted
}                                         // end of block 1: ptr1 is deleted: memory
                                          // is released

  return 0;
}