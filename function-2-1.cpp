#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string get_phase(int temp){ 
  string a = "ice"; 
  string b = "liquid";
  string c = "gas";
  string d  = "decomposed";

  if (temp < 274){
    return a;
  }
  else if (temp < 374){
    return b;
  }
  else if (temp < 4701){
    return c;
  }
  else{
    return d;
  }
}

