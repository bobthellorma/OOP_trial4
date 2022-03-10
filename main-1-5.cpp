#include <iostream>
using namespace std;

// external function
extern void print_summed_matrices(int array1[3][3], int array2[3][3]);

// main
int main(){
  int arr[3][3] = {{2,3,1},{1,1,5},{0,0,1}};
  int arr1[3][3] = {{2,3,0},{1,0,0},{0,1,18}};
  print_summed_matrices(arr,arr1);
}
