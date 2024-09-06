#include<iostream>

using namespace std;

void error (string s)

{
  throw runtime_error (s);
}

int get10()
{
         cout << "Please enter an integer in the range 1 to 10 (inclusive):\n";
         int n = 0;
         while (true) {
                  cin >> n;
                  if (cin) {                                      // we got an integer; now check it
                          if (1<=n && n<=10)
                                   return n;
                          cout << "Sorry " << n << " is not in the [1:10] range; please try again\n";
                  }
                  else if (cin.fail()) {                     // we found something that wasn’t an integer
                          cin.clear();                         // set the state back to good(); we want to look at the characters
                          cout << "Sorry, that was not a number; please try again\n";
                          for (char ch; cin>>ch && !isdigit(ch); )             // throw away non-digits
                                   /* nothing */ ;
                          if (!cin)                               // we didn’t find a digit: give up
                                   error("no input");
                          cin.unget();                       // put the digit back, so that we can read the number
                  }
                  else
                          error("no input");             // bad: give up
         }
}

int main()
{
  get10();
}