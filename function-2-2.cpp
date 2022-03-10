#include <iostream>
#include <cmath>
using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits){
  int decimal = 0;
  for (int i = 0; i < number_of_digits; i++){
    decimal += binary_digits[i]*(pow(2,number_of_digits-i-1));
    cout << decimal << endl;
  }
  return decimal;
}
