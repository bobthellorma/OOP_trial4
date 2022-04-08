#include <iostream>
#include <string>
#include "meerkat.h"
#include "cart.h"
#include <array>
using namespace std;


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

  meerkat e = meerkat();
  e.setName("Gutilla");
  e.setAge(6);

  // Create cart;
  cart cart1 = cart();

  // Add 4 meerkats to cart
  cart1.addMeerkat(b);
  cart1.addMeerkat(d);
  cart1.addMeerkat(e);
  cart1.addMeerkat(a);

  // Display info of cats on cart
  cart1.printMeerkats(); // works nicely

  // Add fifth meerkat
  cart1.addMeerkat(a);

  // Clear cart
  cart1.emptyCart();

  // Put one back in
  cart1.addMeerkat(c);
  cart1.printMeerkats();
}
