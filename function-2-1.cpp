#include <iostream>
//using namespace std;

float add_op(float left, float right){
  float tot = left + right;
}

float subtract_op(float left, float right){
  float tot = left - right;
}

float arithmetic_ops(float left, float right, std::string op){
  if (op == "add"){
    return add_op(left, right);
  }
  if (op == "sub"){
    return subtract_op(left,right);
  }
  else{
    return 0.0;
  }
}
