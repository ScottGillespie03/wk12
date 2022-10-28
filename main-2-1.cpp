#include <iostream>

#include "Tesla.h"
using namespace std;

int main() {
  Tesla t1('S', 50000);
  t1.chargeBattery(500);
  cout << t1.get_batteryPercentage() << endl;
  cout << t1.get_emissions() << endl;

  cout << "Vnum " << t1.get_vinNumber() << endl;

  t1.drive(200);

  cout << "bp " << t1.get_batteryPercentage() << endl;
  cout << "emiss " << t1.get_emissions() << endl;

  return 0;
}