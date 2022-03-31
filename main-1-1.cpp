#include <iostream>

using namespace std;

int *pad_array(int *vals, int len);

int main(){
  int a[4] = {1,3,5,7};
  int* ptr = &a[0];
  int len = 4;
  int*pv = pad_array(ptr,len);
  cout << *pv;
}
