#include <iostream>
using namespace std;

// external function
extern void print_scaled_matrix(int array[3][3],int scale);

// main
int main(){
  int scale = 2;
  int arr[3][3] = {{2,3,0},{1,0,0},{0,1,18}};
  print_scaled_matrix(arr, scale);
}
