#include <iostream>
using namespace std;
int size_of_variable_star_arr(){
  int *arr = new int[3];
  int bla = *arr;
  delete[] arr;
  return 3*sizeof(bla);
}

// * lose pointer
// & gains ponter
