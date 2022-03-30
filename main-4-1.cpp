#include <iostream>
using namespace std;

int secondSmallestSum(int *numbers,int length);

int main(){
  int lis[5] = {-1,3,4,6,-2};
  int *ptr = &lis[0];
  int len = 5;
  cout << secondSmallestSum(ptr,len);
}
