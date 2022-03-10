#include <iostream>
using namespace std;
extern int sum_if_a_palindrome(int integers[], int length);

int main(){
  int integers[] = {1,2,3,2,1};
  int length = 5;
  cout << sum_if_a_palindrome(integers, length);
}
