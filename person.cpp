#include <iostream>
#include <string>
#include "person.h"
using namespace std;

  // data stored
  string Name;
  int Age;

  // constructor
  person::person(string myName,int Salary){
    Sal = Salary;
    Name = myName;
  }

  // change the person's name
  void person::setName(string myName){
    Name = myName;
  }  

  // change the person's salary
  void person::setSalary(int mySalary){
    Sal = mySalary;
  } 

  // get person's name
  string person::getName(){
    return Name;
  }

  // get person's salaray
  int person::getSalary(){
    return Sal;
  }
