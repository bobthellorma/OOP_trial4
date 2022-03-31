#include <iostream>
#include <string>

using namespace std;

string get_phase(int temp);

int main(){
  int t = 4609;
  cout << "phase at " << t << "K is: " << get_phase(t) << endl;
}
