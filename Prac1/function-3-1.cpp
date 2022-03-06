#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool fanarray(int array[], int n){

  // ascending
  for (int i = 0; i < n/2; i++){
    if (array[i] > array[i+1]){
      return false;
    }
  }

  // palindromic?
  for (int i = 0; i < n; i++){
    if (array[i] != array[n-i-1]){
      return false;
    }
    }
  return true;
}
  
    
