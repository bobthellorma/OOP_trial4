#include <iostream>

using namespace std;

int *pad_array(int *vals, int len){
  int *arr = new int[len+2];
    for (int i = 0; i < len; i++){
      arr[i+1] = *(vals+i);
    } 
    arr[0] = *vals;
    arr[len+1] = *(vals+len-1);
    return arr;
}
