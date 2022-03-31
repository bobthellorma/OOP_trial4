#include <iostream>

using namespace std;

int *pad_array(int *vals, int len){
  int arr[4] = {0,0,0,0};
  cout << *arr << *(arr+1) << endl;
  return arr;
}
