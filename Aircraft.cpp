#include "Aircraft.hpp"

Aircraft::Aircraft() {

}

unsigned int Aircraft::fight() {
  unsigned int damage = base_damage * ammo;
  ammo = 0;
  return damage;
}

void Aircraft::refill(unsigned int& avail_ammo) {
  ammo = max_ammo;
  avail_ammo -= max_ammo;
}

std::string Aircraft::get_type() {
  return "Type: " + type_name;
}

std::string Aircraft::get_status() {
  return "Type: " + type_name + ", Ammo: " + to_string(ammo) + ", Base damage: " + to_string(base_damage) + ", All damage: " + to_string(ammo * base_damage);
}

Aircraft::~Aircraft() {

}

