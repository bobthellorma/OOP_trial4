// libraries
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// add two binary numbers
void binaryadd(vector<int> num, vector<int> num2){

  // add zeroes to front 
  while (num.size() < 32){ // integer cannot hold more than 32 bits
  num.insert(num.begin(), 0);
  }
  while (num2.size() < 32){
  num2.insert(num2.begin(), 0);
  }

  vector<int> out = [];

  // arithmetic
  for (int i = 31; i >= 0; i--){
    int val = num[i] + num2[i];
    if (val <= 1){
    /*out.push_back(num);
    }
    else{
      int child = 0;
      out.push_back(child);
      num2[i-1] += 1;
    }
  }

  // print out
  for (int i = 31; i >= 0; i--){
     cout << out[i];
  }
  */
  cout << "Spot up to at end of workshop"
    
}

