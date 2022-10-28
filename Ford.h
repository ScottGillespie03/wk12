#include "Car.h"
#ifndef FORD_H
#define FORD_H

class Ford : public Car {
 public:
  int badegNumber;
  int price;
  float litresOfFuel;

  Ford();
  Ford(int _badgenumber, int _price);

  void refuel(int litres);

  void set_badgeNumber(int _badgeNumber);
  void set_litresOfFuel(float litres);

  int get_badgeNumber();
  float get_litresOfFuel();

  void drive(int kms);
};
#endif