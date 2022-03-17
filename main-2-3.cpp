// Setup
#include <iostream>
#include <math.h>
using namespace std;

// Extern function
extern int sum_if_a_palindrome(int integers[], int length);

// Main function
int main(){
  int binary_digits[5] = {1,0,5,0,1};
  int number_of_digits = 5; 
  cout << sum_if_a_palindrome(binary_digits,number_of_digits);
}
