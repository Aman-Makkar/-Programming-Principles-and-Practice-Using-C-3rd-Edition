#include <iostream>

using namespace std;
double ctok(double c) // converts Celsius to Kelvin
{
  double k = c + 273.25;
  return k;
}

double dtok(double k)
{
  double c = k - 273.15;
  return c;
}

int main()
{
  char unit = 0; // declare input variable
  double temp = 0;
  cout << "Enter the temp and the unit (k or c)\n";
  cin >> temp >> unit; // retrieve temperature to input variable

  // Convert temp
  switch (unit)
  {
  case 'c':
    temp = ctok(temp);
    unit = 'k';
    break;
  case 'k':
    temp = dtok(temp);
    unit = 'c';
    break;
  default:
    cout << "Unknown unit of temoerature";
  }

  cout << "Converted temperature is " << temp << unit;
}