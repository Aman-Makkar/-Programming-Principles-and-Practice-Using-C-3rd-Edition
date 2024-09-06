#include<iostream>
#include<string>
#include<fstream>
#include<vector>
//#include"ppp.h"

using namespace std;


struct Reading {                // a temperature reading
    int hour;                             // hour after midnight [0:23]
    double temperature;         // in Fahrenheit
};
int main()
{
    cout << "Please enter input file name: ";
    string iname;
    cin >> iname;
    ifstream ist{ iname };                          // ist reads from the file named iname
    if (!ist)
        cout << "can't open input file ";

    string oname;
    cout << "Please enter name of output file: ";
    cin >> oname;
    ofstream ost{ oname };                       // ost writes to a file named oname
    if (!ost)
        cout << "can't open output file ";

    vector<Reading> temps;                   // store the readings here
    int hour = -1;
    double temperature = -700;
    while (ist >> hour >> temperature) {
        if (hour < 0 || 23 < hour)
            cout << "hour out of range";
        temps.push_back(Reading{ hour,temperature });
    }

    for (auto x : temps)
        ost << '(' << x.hour << ',' << x.temperature << ")\n";

}