#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool descending(int array[], int n){

  for (int i = 0; i < n-1; i++){
    if (array[i] < array[i+1]){
      return false;
    }
  }
  return true;
}
  
    
