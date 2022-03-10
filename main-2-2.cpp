#include <iostream>
#include <cmath>
using namespace std;
extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){
int a[] = {1,0,1,1,1};
int n = 5;
cout << binary_to_number(a,n);
}
