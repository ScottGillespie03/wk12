#include "Tesla.h"

#include <iostream>
using namespace std;

Tesla::Tesla(char model, int price) {
  set_model(model);
  set_price(price);
  set_batteryPercentage(100);
}
void Tesla::chargeBattery(int mins) {
  int i = 0;

  while (batteryPercentage < 100 && i < mins) {
    batteryPercentage = batteryPercentage + 0.5;
    i++;
  }
}
void Tesla::set_batteryPercentage(float battP) { batteryPercentage = battP; }

void Tesla::set_model(char model) { _model = model; }

float Tesla::get_batteryPercentage() { return batteryPercentage; }
char Tesla::get_model() { return _model; }

void Tesla::drive(int kms) {
  int battDrain = kms / 5;
  float currentBP = get_batteryPercentage();
  float newBatP = currentBP - battDrain;

  int currentEm = get_emissions();

  if (currentBP == 0) {
    set_emissions(currentEm);
  }

  if (newBatP < 0) {
    set_batteryPercentage(0);
    int emiss = 74 * currentBP * 5;
    int emissFinal = emiss + currentEm;
    set_emissions(emissFinal);
  } else {
    set_batteryPercentage(newBatP);
    set_emissions(74 * (((currentBP - newBatP) * 5)) + currentEm);
  }
}