#include <iostream>
#include <bits/stdc++.h>
using namespace std;

extern int count(int array[], int n, int number);
int main()
{
    int arr[] = {12, 3, 4, 15, 12, 13, 12};
    int n = 7;
    int number = 12;
    cout << count(arr, n, number);
    return 0;
}
