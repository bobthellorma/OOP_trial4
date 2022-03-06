#include <iostream>
#include <bits/stdc++.h>
using namespace std;

extern bool fanarray(int array[], int n);

int main(){
    int arr[] = {1,2,6,1,1};
    int n = 5;
    cout << fanarray(arr,n);
    return 0;
}
