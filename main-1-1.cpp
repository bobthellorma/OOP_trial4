#include <iostream>
#include <string>
//using namespace std;

// function
void copy_2d_strings(std::string first[][2], std::string second[][2], int n);

int main(){
  std::string first[3][2] = {
  { "hi", "ja"},
  {"in","lo"}, 
  { "he", "he"}
};
  std::string second[3][2];
  int n = 3;
  copy_2d_strings(first,second,n);
  }
