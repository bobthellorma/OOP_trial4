#include <iostream>
#include <string>
#include "person.h"
using namespace std;


int main(){

  // define 4 objects
  person a = person("Matthew",95);
  person b = person("John",65);
  person c = person("Matilda",73);
  person d = person("Wesley",110);

  // change their details
  a.setName("Elton");
  b.setSalary(14);
  c.setName("Worson");
  d.setSalary(96);

  // display details
  cout << a.getName() << a.getSalary() << endl;
  cout << b.getName() << b.getSalary() << endl;
  cout << c.getName() << c.getSalary() << endl;
  cout << d.getName() << d.getSalary() << endl;
}

