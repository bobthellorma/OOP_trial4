#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double average(int array[], int n){
    double b = (double) n;
    double sum = 0.0;
    if (n<0){
      return 0.0;
    }
    for (int i = 0; i < n; i++){
    sum += array[i]/b;
    }
    return sum;
}
