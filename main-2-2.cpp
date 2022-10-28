#include <iostream>

#include "Ford.h"

using namespace std;

int main() {
  Ford f1('S', 50000);
  f1.refuel(500);
  cout << f1.get_litresOfFuel() << endl;
  cout << f1.get_emissions() << endl;

  f1.drive(400);

  cout << "LOF " << f1.get_litresOfFuel() << endl;
  cout << "emiss " << f1.get_emissions() << endl;
  return 0;
}