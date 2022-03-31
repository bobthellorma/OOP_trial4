#include <iostream>
using namespace std;

bool more_positive(int vals[], int length){
  int pos = 0;
  int neg = 0;
for (int i = 0; i < length; i++){
  if(vals[i] > 0){
    pos += 1;
  }
  else if (vals[i] < 0){
    neg += 1;
  }
}
if (pos > neg){
  return true;
}
return false;
}
