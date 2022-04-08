#ifndef meerkat_H
#define meerkat_H
#include <iostream>
#include <string>
using namespace std;

// class definition for meerkat
class meerkat{
    public:
	meerkat() ;                      // no name or age is required to create a meerkat
    void setName(string meerName);   // change the meerkat's name
    string getName();
    void setAge(int meerAge);        // change the meerkat's age
    int getAge();

    private:
    int Age;
    string Name;
	
};
#endif 
