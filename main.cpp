#include <iostream>
#include "F16.hpp"
#include "F35.hpp"
using namespace std;

int main() {
  F16 a1;
  F35 a2;

  cout << a1.get_type() << endl;
  cout << a2.get_type() << endl;

  cout << a1.get_status() << endl;
  cout << a2.get_status() << endl;

  unsigned int n1 = 100;
  unsigned int n2 = 200;
  a1.refill(n1);
  a2.refill(n2);

  cout << a1.fight() << endl;
  cout << a2.fight() << endl;


	return 0;
}
