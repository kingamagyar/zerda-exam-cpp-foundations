#ifndef CARRIER_HPP_
#define CARRIER_HPP_
#include <vector>
#include <string>

class Carrier {
private:
  std::vector<Aircraft*> aircrafts;
  unsigned int initial_ammo;
public:
  Carrier();
  virtual ~Carrier();
};

#endif /* CARRIER_HPP_ */
