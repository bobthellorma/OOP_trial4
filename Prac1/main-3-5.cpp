#include <iostream>
#include <bits/stdc++.h>
using namespace std;

extern double sumeven(double array[], int n);

int main()
{
    double a[] = { 1, 3, 4, 7, 5, 8, 6 };
    int n = 7;
    cout << sumeven(a,n) << endl;
    return 0;
}
