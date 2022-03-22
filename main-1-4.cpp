#include <iostream>
#include <string>
//using namespace std;

// function
void cpyda(double *old_array,double *new_array,int length);

// up to Question 1.3
int main(){
  double arr[6] = {1,12.3,0,3,4,5.6};
  double arra[6];
  int length = 6;
  cpyda(arr,arra,length);
}
