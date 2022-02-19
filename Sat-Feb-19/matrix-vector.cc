#include <iostream>

/// Matrix-vector product `y = mat * x`
void matvec (double const mat[3][3], double const x[3], double y[3])
{
  for (int i = 0; i < 3; ++i) {
    y[i] = 0.0;
    for (int j = 0; j < 3; ++j)
      y[i] += mat[i][j] * x[j];
  }
}

int main(int argc, char** argv)
{
  double A[3][3] = {
  {1.0, 2.0, 3.0},
  {4.0, 5.0, 6.0},
  {7.0, 8.0, 9.0}
  };

  double x[3]{-1.0, 0.0, 1.0}, y[3];
  std::cout << "Antes" << std::endl;
  for (int i = 0; i < 3; ++i)
  {
    std::cout << y[i] << std::endl;
  }

  matvec(A, x, y);


  std::cout << "Despu'es" << std::endl;

  for (int i = 0; i < 3; ++i)
  {
    std::cout << y[i] << std::endl;
  }

}