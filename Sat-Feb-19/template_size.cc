#include <iostream>

/// Return the number of entries in an array
template <class T, int N>
int array_size(T (&)[N]) { return N; }

/// Return the number of rows and columns in a matrix
template <class T, int N1, int N2>
std::pair<int,int> mult_array_size(T (&)[N1][N2]) { return {N1, N2}; }

int main(int argc, char **argv)
{
  //int (&arreglo)[3] = {1, 2, 3};

  //array_size(arreglo);
  //std::cout << lenght << std::endl;


  return 0;
}