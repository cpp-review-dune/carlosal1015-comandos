#include <iostream>

int main(int argc, char **argv)
{
  int i = 5;
  int* puntero = &i;
  int** puntero_a_puntero = &puntero;

  std::cout << "Valor de i "
            << *puntero
            << std::endl
            << "Valor de puntero (direcci'on)"
            << *puntero_a_puntero
            << std::endl
            << "Direcci'on de i "
            << puntero
            << std::endl;
  
  return 0;
}