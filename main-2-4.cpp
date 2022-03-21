#include <iostream>
//using namespace std;

float arithmetic_ops(float left, float right, float (*op)(float,float)); // can point to a function that takes in two floats
float multiply_op(float left, float right);

int main(){
  float left = 4;
  float right = 3;
  std::string i = "sub";
  std::cout << arithmetic_ops(left,right,multiply_op);
}
