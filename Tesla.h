#include "Car.h"

#ifndef TESLA_H
#define TESLA_H

class Tesla : public Car {
 private:
  char _model;
  float batteryPercentage;
  int nextVinNumber;

 public:
  Tesla();
  Tesla(char model, int price);
  void chargeBattery(int mins);

  void set_batteryPercentage(float battP);
  void set_model(char model);

  float get_batteryPercentage();
  char get_model();

  void drive(int kms);
};

static int nextVinNumber = 1000001;

#endif