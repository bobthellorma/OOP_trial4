#include <iostream>
using namespace std;
int size_of_variable_star_arr(){
  double a, *p;
  p = &a;
  return sizeof(p); // returns size of memory
}
