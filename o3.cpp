#include <iostream>
using namespace std;

void milesPerhours(float milesTraveled, float hoursTraveled) {

  float speed = milesTraveled / hoursTraveled;

  cout << "Your speed is " << speed << " miles per hour." << endl;
}

int main() {
  float milesTraveled, hoursTraveled;

  cout << "Please input the miles traveled: ";
  cin >> milesTraveled;
  cout << "Please input the hours traveled: ";
  cin >> hoursTraveled;


  milesPerhours(milesTraveled, hoursTraveled);

  return 0;
}
