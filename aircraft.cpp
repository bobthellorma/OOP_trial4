#include <iostream>
#include <string>
#include "aircraft.h"
#include <array>
using namespace std;

// create empty cart
aircraft::aircraft(){
  N = 0;
}

// add meerkat
bool aircraft::addMeerkat(meerkat cat){
  N += 1;
  if (N > 4){
    cout << "Error: the cart is full" << endl;
    return false;
  }
  obs[N-1] = cat;
  return true;
}

// remove meerkats from cart
void aircraft::emptyCart(){
N = 0;
}

// print meerkats
void aircraft::printMeerkats(){
  for (int i = 0; i < N; i++){
  cout << obs[i].getName() << " " << obs[i].getAge() << endl;
}
}
