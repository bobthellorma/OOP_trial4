#include <iostream>

int main(){
  int i = 16; // assign integer i to equal 16
  int *ptr = &i; // ptr stores memory address of i
  int pre = *ptr; // pre accesses value ptr points to
  std::cout << pre;
}
