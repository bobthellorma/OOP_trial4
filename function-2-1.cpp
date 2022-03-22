#include <iostream>
#include <string>
//using namespace std;

void print_sevens(int *nums,int length){
  for (int i = 0; i < length; i++){
    int a = *(nums + i);
    if (a % 7 == 0){
      std::cout << a << std::endl;
    }
  }
}
  
