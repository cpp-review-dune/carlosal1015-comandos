#include <iostream>

double** make_matrix (int const nrows, int const ncols)
{
  double** mat = new double*[nrows];
  for (int i = 0; i < nrows; ++i)
    mat[i] = new double[ncols];
  return mat;
}

int main(int argc, char **argv)
{
  double* row1 = new double[4]{1.0, 2.0, 3.0, 4.0};
  double* row2 = new double[4]{2.0, 3.0, 4.0, 5.0};
  double* row3 = new double[4]{3.0, 4.0, 5.0, 6.0};
  double* row4 = new double[4]{4.0, 5.0, 6.0, 7.0};
  double** mat1 = new double*[4]{row1, row2, row3, row3};
  
  double** mat2 = make_matrix(4,4);

  std::cout << mat2[2][3] << std::endl;
  
  //mat2[0][0] = 1.0;
  //mat2[0][1] = 2.0;

  return 0;
}