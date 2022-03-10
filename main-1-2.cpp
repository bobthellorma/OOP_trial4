#include <iostream>
extern int identity(int array[10][10]);
using namespace std;

int main(){
  int arr[10][10] = {0};
  cout << arr << endl;
  cout << identity(arr) << endl;
}
