#include <iostream>

using namespace std;
double ctok(double c) // converts Celsius to Kelvin
{
  double k = c + 273.25;
  return k;
}

int main()
{
  double c = 0; // declare input variable
  cout << "\n";
  cin >> c; // retrieve temperature to input variable
  if (c < -273.15)
  {
    cout << "The temperature must be higher than -273.15";
  }
  else
  {
    double k = ctok(c);                 // convert temperature
    cout << c << "c is " << k << "K\n"; // print out temperature
  }
}