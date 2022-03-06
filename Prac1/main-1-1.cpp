#include <iostream>
#include <bits/stdc++.h>
using namespace std;

extern int sum_array(int array[], int n);
int main()
{
    int arr[] = {12, 3, 4, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of given array is " << sum_array(arr, n);
    return 0;
}
