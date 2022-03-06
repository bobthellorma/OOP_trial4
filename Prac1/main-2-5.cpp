#include <iostream>
#include <bits/stdc++.h>
using namespace std;

extern bool descending(int array[], int n);

int main(){
    int arr[] = {5,4,3,-5,-11};
    int n = 5;
    cout << descending(arr,n);
    return 0;
}
