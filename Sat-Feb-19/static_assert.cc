#include <iostream>

#define SIZE(a)  (sizeof(a) / sizeof(a[0]))

int main(int argc, char **argv)
{
  int vector[10]{};
  static_assert(SIZE(vector) == 10);
}