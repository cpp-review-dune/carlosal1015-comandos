#include <iostream>
#include <cstdlib>

int main(int argc, char **argv)
{
  int number = 10;
  int * pointer2number = &number; // puntero constante a una variable
  int & reference2number = number;

  std::cout << reference2number << std::endl;


  int* ptr = nullptr;
  //std::cout << *ptr << std::endl;

  std::cout << *pointer2number << std::endl;
  *pointer2number = 20; // se modific'o number a 20

  std::cout << number << std::endl;

  return EXIT_SUCCESS;
}
