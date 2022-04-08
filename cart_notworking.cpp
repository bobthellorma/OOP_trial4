#include <iostream>
#include <string>
#include "cart.h"
#include <array>
using namespace std;

// create empty cart
cart::cart(){
  N = 0;
}

// add meerkat
bool cart::addMeerkat(meerkat cat){
  N += 1;
  if (N > 4){
    cout << "Error: the cart is full";
    return false;
  }
  obs[N] = cat;
  return true;
}

// remove meerkats from cart
void cart::emptyCart(){
int N = 0;
}

// print meerkats
void cart::printMeerkats(){
  for (int i = 0; i < N; i++){
  cout << obs[i].Name << " " << obs[i].Age << endl;
}
}
