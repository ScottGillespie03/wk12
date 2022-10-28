#include "Car.h"

Car::Car(int _price) {
  price = _price;
  emissions = 0;
}

Car::Car() {}

void Car::set_price(int _price) { price = _price; }
void Car::set_vinNumber(int _vinNumber) { vinNumber = _vinNumber; }
void Car::set_emissions(int _emissions) { emissions = _emissions; }

int Car::get_price() { return price; }
int Car::get_vinNumber() { return vinNumber; }
int Car::get_emissions() { return emissions; }