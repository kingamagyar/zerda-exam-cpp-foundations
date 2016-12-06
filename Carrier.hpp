#ifndef CARRIER_HPP_
#define CARRIER_HPP_
#include "F16.hpp"
#include "F35.hpp"
#include <vector>
#include <string>

class Carrier {
private:
  std::vector<Aircraft*> aircrafts;
  unsigned int stored_ammo;
  unsigned int health_point;
public:
  Carrier(unsigned int init_ammo, unsigned int hp);
  void add_aircraft(std::string type) throw (const char*);
  bool is_there_enough_ammo();
  void fill() throw (const char*);
  void fight(Carrier& attacker);
  unsigned int count_aircrafts();
  std::string get_status_by_aircraft();
  unsigned int get_all_damage();
  std::string get_all_status();
  virtual ~Carrier();
};

#endif /* CARRIER_HPP_ */
