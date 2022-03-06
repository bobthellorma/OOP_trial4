#include <bits/stdc++.h>
using namespace std;
 
int median(int array[], int n)
{
    sort(array, array + n);
 
    // return
    if (n % 2 != 0 and n>0)
        return array[(n-1) / 2];
 
    return 0;
}
