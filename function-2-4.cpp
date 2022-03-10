#include <iostream>
using namespace std;

int max_integer(int integers[], int length){

// if length < 0
  if (length < 1){
  int max = 0;
  return max;
  }

  // math
  int max = integers[0];
  for (int i = 1; i < length; i++){

    // update min
    if (max < integers[i]){
      max = integers[i];
    }
    }
    return max;
  }


int min_integer(int integers[], int length){

  // if length < 0
  if (length < 1){
  int min = 0;
  return min;
  }

  // math
  int min = integers[0];
  for (int i = 1; i < length; i++){

    // update min
    if (min > integers[i]){
      min = integers[i];
    }
    }
    return min;
  }

// Q2.4
int sum_min_and_max(int integers[], int length){
  int min = min_integer(integers, length);
  //cout << "minimum: " << min << endl;
  int max = max_integer(integers, length);
  //cout << "maximum: " << max << endl;
  int sum = -1;
  if (length > 0){
    int sum = min + max;
    return sum;
  }
  return sum;
}
