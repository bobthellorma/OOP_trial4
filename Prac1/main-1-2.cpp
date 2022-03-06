#include <iostream>
#include <bits/stdc++.h>
using namespace std;

extern double average(int array[], int n);
int main()
{
    int arr[] = {12, 3, 4, 15};
    int n = 4;
    cout << "Average of given array is " << average(arr, n);
    return 0;
}
