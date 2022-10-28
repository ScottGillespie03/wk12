#include "Car.h"

#ifndef TESLA_H
#define TESLA_H

class Tesla : public Car {
 public:
  char _model;
  float batteryPercentage;

  Tesla();
  Tesla(char model, int price);
  void chargeBattery(int mins);

  void set_batteryPercentage(float battP);
  void set_model(char model);

  float get_batteryPercentage();
  char get_model();

  void drive(int kms);
};
#endif