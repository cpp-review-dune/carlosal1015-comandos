#include <iostream>

int main(int argc, char **argv)
{
  double mat1[2][3] = {
  {1.0, 2.0, 3.0},
  {4.0, 5.0, 6.0}
  };

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      std::cout << mat1[i][j] << std::endl;
    }
  }

//int mat2[][2] = { {1,2}, {3,4} };

}