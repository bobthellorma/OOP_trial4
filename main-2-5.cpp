#include <iostream>

int main(){
  int baz[3][2] = {{1,2},{5,6},{7,3}};
  int *ptr = &baz[0][0];
  int val = *ptr;
  for (int i = 0; i < 6; i++){
    std::cout << val << std::endl;
    ptr += 1; // goes to next position in array
    val = *ptr; // sets pointer again
  }
}
