#include "Carrier.hpp"

Carrier::Carrier(unsigned int init_ammo, unsigned int hp) {
  stored_ammo = init_ammo;
  health_point = hp;
}

void Carrier::add_aircraft(std::string type) throw (const char*) {
  Aircraft* new_aircraft;
  if (type == "F16") {
    new_aircraft = new F16;
  } else if (type == "F35") {
    new_aircraft = new F35;
  } else {
    throw "There isn't this kind of aircraft, dude!";
  }
  aircrafts.push_back(new_aircraft);
}

bool Carrier::is_there_enough_ammo() {
  return stored_ammo != 0;
}

void Carrier::fill() throw (const char*) {
  if (is_there_enough_ammo()) {
    for (unsigned int i = 0; i < aircrafts.size(); ++i) {
      if (aircrafts[i]->get_type() == "F35") {
        aircrafts[i]->refill(stored_ammo);
      }
    }
    for (unsigned int i  = 0; i < aircrafts.size(); ++i) {
      if (aircrafts[i]->get_type() == "F16") {
        aircrafts[i]->refill(stored_ammo);
      }
    }
  } else {
    throw "Error: Not enough ammo left!";
  }
}

unsigned int Carrier::count_aircrafts() {
  return aircrafts.size();
}

std::string Carrier::get_status_by_aircraft() {
  std::string status;
  for (unsigned int i = 0; i < aircrafts.size(); ++i) {
    status += aircrafts[i]->get_status() + "\n";
  }
  return status;
}

unsigned int Carrier::get_all_damage() {
  unsigned int all_damage;
  for (unsigned int i = 0; i < aircrafts.size(); ++i) {
    all_damage += aircrafts[i]->all_damage();
  }
  return all_damage;
}

std::string Carrier::get_all_status() {
  if (health_point == 0) {
    return "It's dead Jim :(";
  } else {
    return "Aircraft count: " + to_string(count_aircrafts()) + ", Ammo storage: " + to_string(stored_ammo) + ", Total damage: " + to_string(get_all_damage()) + "\nAircrafts:\n" + get_status_by_aircraft();
  }
}

Carrier::~Carrier() {
  for (unsigned int i = 0; i < aircrafts.size(); ++i) {
    delete aircrafts[i];
  }
}
