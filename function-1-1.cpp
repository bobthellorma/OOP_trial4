#include <iostream>
using namespace std;

int size_of_variable_star_t(){
double a, *p; // declare double a and ptr p
p = &a; // make p point to a
 return sizeof(*p); // return size of *p or a
}

