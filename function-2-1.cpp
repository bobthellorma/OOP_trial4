#include <iostream>
#include <string>
#include <vector>

//using namespace std;

void print_as_binary(std::string decimal_number){

  // store string as integer
  int num = stoi(decimal_number);
  std::vector <int> out;

  // base 10 to binary
  while (num > 0){
    int rem = num % 2;
    out.push_back(rem); // inserts remainder at front
    num = num/2;
  }
  
  int n = out.size();
  for (int i = n-1; i >= 0; i = i-1){
    std::cout << out[i];
  }  
  std::cout << std::endl;
}
