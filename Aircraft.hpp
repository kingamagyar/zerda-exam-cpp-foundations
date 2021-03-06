#ifndef AIRCRAFT_HPP_
#define AIRCRAFT_HPP_
#include "util.hpp"
#include <iostream>
#include <string>

class Aircraft {
protected:
  unsigned int ammo;
  unsigned int max_ammo;
  unsigned int base_damage;
  std::string type_name;
public:
  Aircraft();
  unsigned int all_damage();
  unsigned int fight();
  void refill(unsigned int& avail_ammo);
  std::string get_type();
  std::string get_status();
};

#endif /* AIRCRAFT_HPP_ */
