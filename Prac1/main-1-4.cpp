#include <iostream>
#include <bits/stdc++.h>
using namespace std;

extern int sumtwo(int array[], int secondarray[], int n);

int main(){
    int arr[] = {1,3,2,4};
    int arra[] = {0,0,4,0};
    int n = 4;
    cout << sumtwo(arr,arra,n);
    return 0;
}
