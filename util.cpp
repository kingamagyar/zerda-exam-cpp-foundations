#include "util.hpp"

std::string to_string(int integer) {
  std::stringstream s;
  s << integer;
  return s.str();
}
