#include<iostream>

using namespace std;

class Date {
  public:
        Date(int y, int m, int d);    //constructor: check of values
        void add_day(int n);          //increase the date by n days
        int month();

  private:
        int y,m,d;    //year, month, day  
};
