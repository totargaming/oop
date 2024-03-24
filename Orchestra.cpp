#include "Orchestra.h"

Orchestra::Orchestra(int size)
    : cap(size), current_size(0), list(new Musician[size]){};
Orchestra::Orchestra() : Orchestra(0){};

int Orchestra::get_current_number_of_members() { return current_size; };

bool Orchestra::has_instrument(std::string instrument) {
  for (int i = 0; i < current_size; i++) {
    if (list[i].get_instrument() == instrument) {
      return true;
    }
  }
  return false;
};

Musician* Orchestra::get_members() { return list; };

bool Orchestra::add_musician(Musician new_musician) {
  if (current_size < cap) {
    list[current_size++] = new_musician;
    return true;
  } else
    return false;
};
Orchestra::~Orchestra() { delete[] list; };
