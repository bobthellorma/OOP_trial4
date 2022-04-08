#ifndef aircraft_H
#define aircraft_H
#include <iostream>
#include <string>
#include "person.h"
#include <array>
using namespace std;

class aircraft{

public:
aircraft();                       // create an empty cart object
bool addMeerkat(person cat);   // adds a meerkat to the cart, returns false if full
void emptyCart();               // remove all meerkats from the cart
void printMeerkats();           // print the name, a space, the age, then a new line
                                // for each meerkat in the order they were added

private:
int N; // if Num > 4, print error message
array<meerkat,4> obs;

};
#endif
