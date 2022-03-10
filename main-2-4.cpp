#include <iostream>
using namespace std;
extern int sum_min_and_max(int integers[], int length);

int main(){
  int integers[] = {1,3,4,-19,3};
  int length = -1;
  cout << sum_min_and_max(integers, length);
}
