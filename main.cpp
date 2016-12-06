#include "Carrier.hpp"
using namespace std;

int main() {
  Carrier c(2, 10);
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

  try {
    c.add_aircraft("F16");
    c.add_aircraft("F16");
    c.add_aircraft("F35");
  } catch (const char* excp) {
    cout << excp << endl;
  }

  cout << c.count_aircrafts() << endl;

  cout << c.get_all_status() << endl;

	return 0;
}
