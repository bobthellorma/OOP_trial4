#include <iostream>

using namespace std;
bool more_positive(int vals[], int length);

int main(){
  int arr[6] = {1,0,0,0,0,0};
  int len = 6;
  cout << more_positive(arr,len);
}
