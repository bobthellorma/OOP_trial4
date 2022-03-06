#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void twofivenine(int array[], int n){

  // Lists
  int data[] = {0, 0, 0};
  int vals[] = {2, 5, 9};

  // Gather data
  for (int i = 0; i < n; i++){
    switch(array[i]) {
   case 2:
      data[0] += 1;
      break;
   case 5:
      data[1] += 1;
      break;
   case 9:
      data[2] += 1;
  }
  }

  // Print out data
  for (int i = 0; i < 3; i++){
    cout << vals[i] << ":" << data[i] << ";";
  }
}

  
    
