#include <iostream>
using namespace std;

int secondSmallestSum(int *numbers,int length){
  int smallest = *numbers;
  int sum = 0;
  for (int i = 0; i < length; i++){
    if (*(numbers+i) > 0){
    sum += *(numbers+i);
    }
    if (smallest > *(numbers+i)){
      smallest = *(numbers+i);
    }
    // cout << sum << " " << smallest << endl; // debugging
  }
  if (smallest > 0){
  return (sum - smallest);
  }
  else{return sum;}
}
