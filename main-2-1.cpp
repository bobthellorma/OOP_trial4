#include <iostream>
#include <string>
//using namespace std;

// function
void print_sevens(int *nums,int length);

// up to Question 1.3
int main(){
  int arr[] = {2,4,6,7,14,7};
  int *ptr = &arr[0];
  int n = 6;
  print_sevens(ptr,n);
}
