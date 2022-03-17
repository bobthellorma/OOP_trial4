// Setup
#include <iostream>
#include <math.h>
using namespace std;

// Palindrome Checker
bool is_a_palindrome(int integers[], int length){
  for (int i = 0; i < length; i++){
    if (integers[i] != integers[length-i-1]){
      return 0;
    }
  }
  return 1;
}

// Sum of elements
int sum_elements(int integers[], int length){
  int tot = 0;
  for (int i = 0; i < length; i++){
    tot += integers[i];
  }
  return tot;
}

// Function
int sum_if_a_palindrome(int integers[], int length){

  // if length is < 1
  if (length < 1){
    return 0;
  }

  // Is it a palindrome?
  bool pal = is_a_palindrome(integers, length);
  if (pal == 0){
    return -2;
  }

  // Find sum
  int a = sum_elements(integers, length);
  return a;
}
