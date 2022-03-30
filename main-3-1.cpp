#include <iostream>
using namespace std;

bool equalsArray(int *numbers1,int *numbers2,int length) ;

int main(){
  int num[4] = {3,0,0,1};
  int num1[4] = {3,0,0,1};
  int len = 4;
  int *ptr = &num[0];
  int *ptr1 = &num1[0];
  cout << equalsArray(ptr,ptr1,len) << endl;
}
