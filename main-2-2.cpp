// Setup
#include <iostream>
#include <math.h>
using namespace std;

// Extern function
extern int binary_to_number(int binary_digits[], int number_of_digits);

// Main function
int main(){
  int binary_digits[5] = {1,1,1,1,0};
  int number_of_digits = 5; 
  cout << binary_to_number(binary_digits,number_of_digits);
}
