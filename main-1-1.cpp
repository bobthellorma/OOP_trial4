#include <iostream>
#include <string>
#include "meerkat.h"
using namespace std;

/*
  // Meerkat Class
  class meerkat(){

    public:
    meerkat() ;                      // no name or age is required to create a meerkat
    void setName(string meerName);   // change the meerkat's name
    string getName();
    void setAge(int meerAge);        // change the meerkat's age
    int getAge();

    private:
    string Name;
    int Age;
  }

// Meerkat Functions

*/

int main(){
  
  // create meerkat objects
  meerkat a = meerkat();
  a.setName("Mina");
  a.setAge(2);

  meerkat b = meerkat();
  b.setName("Tony");
  b.setAge(4);

  meerkat c = meerkat();
  c.setName("Russell");
  c.setAge(1);

  meerkat d = meerkat();
  d.setName("Frank");
  d.setAge(3);

  // print out values
  cout << a.getName();
  cout << a.getAge() << endl;

  cout << b.getName();
  cout << b.getAge() << endl;

  cout << c.getName();
  cout << c.getAge() << endl;

  cout << d.getName();
  cout << d.getAge() << endl;
}
