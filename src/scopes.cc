#include <iostream>

int main(int argc, char **argv)
{
  { // block 1
    int  n1 = 1;       // n1 == 1
    std::cout << n1 << std::endl;
    { // block 1.1
        int  n1 = 2;   // n1 == 2
        std::cout << n1 << std::endl;
    }
                       // n1 == 1
    { // block 1.2
        int  n1 = 3;   // n1 == 3
        std::cout << n1 << std::endl;
    }
    { // block 1.3
        n1 = 4;
        std::cout << n1 << std::endl;
    }
                       // n1 == 4 !!!
  std::cout << n1 << std::endl;
}

  return 0;
}