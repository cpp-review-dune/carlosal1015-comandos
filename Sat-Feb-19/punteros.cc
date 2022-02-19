#include <iostream>

int main(int argc, char **argv)
{
  double primos[8]{2.0, 3.0, 5.0, 7.0, 11.0, 13.0, 17.0, 19.0};
  double* puntero = primos;

  //for (int i = 0; i < 8; ++i)
  //{
//    std::cout << puntero[i] << std::endl;
//  }

std::cout << puntero << std::endl;
std::cout << &puntero[0] << std::endl;
std::cout << &puntero[1] << std::endl;


  return 0;
}