#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count(int array[], int n, int number){
    int sum = 0;
    if (n<0){
      return 0;
    }
    for (int i = 0; i < n; i++){
      if (array[i] == number){
        sum += 1;
      }
    }
    return sum;
}
