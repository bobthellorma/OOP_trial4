#include <iostream>
//using namespace std;

extern float arithmetic_ops(float left, float right, std::string op);

int main(){
  float left = 4;
  float right = 3;
  std::string i = "sub";
  std::cout << arithmetic_ops(left,right,i);
}
