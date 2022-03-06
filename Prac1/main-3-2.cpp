#include <iostream>
#include <bits/stdc++.h>
using namespace std;

extern int median(int array[], int n);

int main()
{
    int a[] = { 1, 3, 4, 7, 5, 8, 6 };
    int n = 7;
    cout << median(a, n) << endl;
    return 0;
}
