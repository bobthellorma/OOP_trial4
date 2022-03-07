#include <iostream>
#include <vector>
using namespace std;

void binaryconversion(int num){
  vector< int > out; // declare vector to return

  // base 10 to binary
  while (num > 0){
    int rem = num % 2;
    out.push_back(rem); // inserts remainder at front
    num = num/2;
  }
  
  int n = out.size();
  for (int i = n-1; i >= 0; i = i-1){
    cout << out[i];
  }  
}
