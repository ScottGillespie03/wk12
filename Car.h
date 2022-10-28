#ifndef CAR_H
#define CAR_H

class Car {
 public:
  int price;
  int vinNumber;
  int emissions;

  Car(int _price);
  Car();

  void set_price(int _price);
  void set_vinNumber(int _vinNumber);
  void set_emissions(int _emissions);

  int get_price();
  int get_vinNumber();
  int get_emissions();

  virtual void drive(int kms) = 0;
};
#endif