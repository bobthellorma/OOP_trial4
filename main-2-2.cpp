#include <iostream>
#include <string>
//using namespace std;

// function
int maximum_sum(int *nums,int length);

// up to Question 1.3
int main(){
  int arr[] = {2,1,-3,3};
  int *ptr = &arr[0];
  int a = sizeof(arr)/sizeof(arr[0]);
  std::cout << maximum_sum(arr,a);
}
