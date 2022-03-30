#include <iostream>
using namespace std;

void hexDigits(int *numbers,int length);

int main(){
  int arr[3] = {1,11,12};
  int *ptr = &arr[0];
  int len = 3;
  hexDigits(ptr,len);
}
