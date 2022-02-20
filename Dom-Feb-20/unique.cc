#include <iostream>
#include <cassert>
#include <memory>

int main(int argc, char **argv)
{
  { // block 1
  std::unique_ptr<int> ptr1 = std::make_unique<int>(5); // allocate memory for int, value 5
  *ptr1 = 6;     // assign new value to memory
  { // block 1.1
    //std::unique_ptr<int> ptr2 = ptr1;     // ERROR: cannot copy unique_ptr
  }
}                                         // end of block 1: ptr1 is deleted: memory
                                          // is released
  return 0;
}