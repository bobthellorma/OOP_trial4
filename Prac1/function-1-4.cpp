#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumtwo(int array[], int secondarray[], int n){
    int sum = 0;
    if (n<0){
      return sum;
    }

    for (int i = 0; i < n; i++){
      sum += array[i];
      sum += secondarray[i];
      }
      
    return sum;
}
