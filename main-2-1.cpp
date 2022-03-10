#include <iostream>
#include <string>
#include <vector>
//using namespace std;

// external function
extern void print_as_binary(std::string decimal_number);

// main
int main(){
  char strum[] = "36";
  print_as_binary(strum);
}
