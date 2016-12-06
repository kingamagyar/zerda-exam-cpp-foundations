#include "Aircraft.hpp"

Aircraft::Aircraft() {
  ammo = 0;
  max_ammo = 0;
  base_damage = 0;
  type_name = "";
}

unsigned int Aircraft::all_damage() {
  return base_damage * ammo;
}

unsigned int Aircraft::fight() {
  unsigned int damage = all_damage();
  ammo = 0;
  return damage;
}

void Aircraft::refill(unsigned int& avail_ammo) {
  if (avail_ammo > max_ammo) {
    ammo = max_ammo;
    avail_ammo -= max_ammo;
  } else {
    ammo = avail_ammo;
    avail_ammo = 0;
  }
}

std::string Aircraft::get_type() {
  return type_name;
}

std::string Aircraft::get_status() {
  return "Type: " + type_name + ", Ammo: " + to_string(ammo) + ", Base damage: " + to_string(base_damage) + ", All damage: " + to_string(all_damage());
}
