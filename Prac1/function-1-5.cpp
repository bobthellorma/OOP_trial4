#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count_even(int number){
  int sum = 0;
  for (int i = 0; i <= number; i += 2){
    sum += 1;
  }
  return sum;
}
    
