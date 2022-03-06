#include <iostream>
#include <bits/stdc++.h>
using namespace std;

extern bool ascending(int array[], int n);

int main(){
    int arr[] = {1,2,4,61,8};
    int n = 5;
    cout << ascending(arr,n);
    return 0;
}
