#include <iostream>

void copia(const int x[20], int y[20])
{
  for(int i = 0; i < 20; i++)
  {
    y[i] += x[i];
  }
}

int main(int argc, char **argv)
{
  int u[20]{0, 14, -2, 5, 12}, v[20];
  copia(u, v);

  for (int i = 0; i < 20; i++)
  {
    std::cout << v[i] << std::endl;
  }

}