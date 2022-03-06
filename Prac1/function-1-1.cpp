#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum_array(int array[], int n){
    if (n<0){
      return 0;
    }
    int sum = 0; // initialize sum
    for (int i = 0; i < n; i++)
    sum += array[i];
 
    return sum;
}
