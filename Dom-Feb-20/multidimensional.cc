#include <iostream>

double& access (double* mat, int const nrows, int const ncols,
                int const i, int const j)
{
  return mat[i * ncols + j];
}

int main ()
{
  int      nrows = 10;
  int      ncols = 20;
  double*  mat = new double[ nrows * ncols ];
  access(mat, nrows, ncols, 3, 1) = 3.1415;
  access(mat, nrows, ncols, 2, 7) = 2.7182;

  std::cout << mat[2 * 5 + 10] << std::endl;
}