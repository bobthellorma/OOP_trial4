#include <iostream>
extern int diagonal(int array[4][4]);
using namespace std;

int main(){
  int arr[4][4] = {{1,2,3,4},{12,3,12,4},{1,7,9,1},{0,0,0,5}};
  cout << diagonal(arr);
}
