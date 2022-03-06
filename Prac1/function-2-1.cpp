#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int minimum(int array[], int n){
  int min = array[0];
  for (int i = 1; i < n; i++){
    if (array[i] < min){
      min = array[i];
    }
  }
  return min;
}
  
    
