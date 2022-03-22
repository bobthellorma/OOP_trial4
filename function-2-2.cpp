#include <iostream>
#include <string>
//using namespace std;

int maximum_sum(int *nums,int length){

  // set initial variables
  int sum = *(nums);
  int best = *(nums);

  for (int i = 1; i < length; i++){

    // less than zero?
    if (sum < 0){
      sum = 0;
    }

    // add on
    sum += *(nums + i);

    // now assess best
    if (sum > best){
      best = sum;
      //std::cout << best << std::endl;
    }
  }
  return best;
}
  
