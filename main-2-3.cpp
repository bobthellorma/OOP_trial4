#include <iostream>

int main(){
  int i = 42; // assign integer i to equal 16
  int *ptr = &i; // ptr stores memory address of i
  int pre = *ptr; // pre accesses value ptr points to
  pre += 5;
  std::cout << pre << std::endl;
  pre -= 2;
  std::cout << pre;
}
