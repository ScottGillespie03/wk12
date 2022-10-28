#include "Ford.h"

Ford::Ford(int _badgenumber, int _price) {
  set_badgeNumber(_badgenumber);
  set_price(_price);
}

void Ford::refuel(int litres) {
  int i = 0;
  while (litresOfFuel < 60 && i < litres) {
    litresOfFuel = litresOfFuel + 1;
  }
}

void Ford::set_badgeNumber(int _badgeNumber) { badegNumber = _badgeNumber; }

void Ford::set_litresOfFuel(float litres) { litresOfFuel = litres; }

int Ford::get_badgeNumber() { return badegNumber; }

float Ford::get_litresOfFuel() { return litresOfFuel; }

void Ford::drive(int kms) {
  int litreDrain = kms / 5;
  float currentLOF = get_litresOfFuel();
  float newLOF = currentLOF - litreDrain;

  int currentEm = get_emissions();

  if (currentLOF == 0) {
    set_emissions(currentEm);
  }

  if (newLOF < 0) {
    set_litresOfFuel(0);
    int emiss = 234 * currentLOF * 5;
    int emissFinal = emiss + currentEm;
    set_emissions(emissFinal);
  } else {
    set_litresOfFuel(newLOF);
    set_emissions(234 * (((currentLOF - newLOF) * 5)) + currentEm);
  }
}