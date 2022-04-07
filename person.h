#ifndef meerkat_H
#define meerkat_H
#include <iostream>
#include <string>
using namespace std;

// class definition person
class person{
    public:
    person(string myName,int Salary); // a name and salary must be provided to create a person
    void setName(string myName);      // change the person's name
    string getName();
    void setSalary(int mySalary);     // change the person's salary
    int getSalary();

    private:
    int Sal;
    string Name;
	
};
#endif 
