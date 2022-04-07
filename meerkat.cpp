#include <iostream>
#include <string>
#include "meerkat.h"
using namespace std;

  // data stored
  string Name;
  int Age;

  // constructor
  meerkat::meerkat(){
    int Age = 1;
    string Name = "Dorothy";
  }

  // change the meerkat's name
  void meerkat::setName(string meerName){
    Name = meerName;
  }  

  // change the meerkat's age
  void meerkat::setAge(int meerAge){
    Age = meerAge;
  } 

  // get meerkat's name
  string meerkat::getName(){
    return Name;
  }

  // get meerkat's age
  int meerkat::getAge(){
    return Age;
  }
