#include <iostream>
using namespace std;

bool is_a_palindrome(int integers[], int length){
  for (int i = 0; i < length; i++){
     //cout << integers[i] << endl << integers[length-1-i] << endl;
    if (integers[i] != integers[length-1-i]){
      return 0;
    }
  }
  return 1;
}

int sum_elements(int integers[], int length){
  int sum = 0;
  for (int i = 0; i < length; i++){
    sum += integers[i];
}
return sum;
}

// Question 2.3
int sum_if_a_palindrome(int integers[], int length){
  bool pal = is_a_palindrome(integers,length);
  cout << pal << endl;
  int sum = sum_elements(integers,length);
  cout << sum << endl;

  if (length == 0){
    return -1;
  }
  if (pal == 1){
    return sum;
  }
  return -2;
}
