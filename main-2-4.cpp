#include <iostream>

int main(){
  int baz[5] = {1,2,3,4,5};
  int *ptr = &baz[0];
  int val = *ptr;
  for (int i = 0; i < 5; i++){
    std::cout << val << std::endl;
    val += 1; // goes to next position in array
  }
}
