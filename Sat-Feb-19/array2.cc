#include <iostream>

int main(int argc, char **argv)
{
  double  f[5] = {1.0, 2.0, 3.0};

  double empty[10]={};

  for (int i = 0; i < 5; ++i)
  {
    std::cout << f[i] << "\n";
  }

  for (int i = 0; i < 10; ++i)
  {
    std::cout << empty[i] << "\n";
  }
}