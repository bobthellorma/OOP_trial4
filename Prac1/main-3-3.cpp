#include <iostream>
#include <bits/stdc++.h>
using namespace std;

extern double weightedaverage(int array[], int n);

int main()
{
    int a[] = { 1, 3, 4, 7, 5, 8, 6 };
    int n = 7;
    cout << weightedaverage(a,n) << endl;
    return 0;
}
