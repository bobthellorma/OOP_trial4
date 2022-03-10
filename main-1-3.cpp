#include <iostream>
extern int count_numbers(int array[4][4]);
using namespace std;

int main(){
  int arr[4][4] = {{1,2,3,16},{5,6,21,2},{13,14,12,11},{10,9,6,2}};
  cout << count_numbers(arr);
}
