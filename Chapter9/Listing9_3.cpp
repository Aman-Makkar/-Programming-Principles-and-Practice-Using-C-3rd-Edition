#include<iostream>

using namespace std;

void error (string s)

{
  throw runtime_error (s);
}

void skip_to_int()
{
         if (cin.fail()) {                                                   // we found something that wasn’t an integer
                  cin.clear();                                             // we’d like to look at the characters
                  for (char ch; cin>>ch; ) {                      // throw away non-digits
                           if (isdigit(ch) || ch=='-') {
                                    cin.unget();                          // put the digit back, so that we can read the number
                                    return;
                           }
                  }
         }
         error("no input");                                           // eof or bad: give up
}

int get10()
{
         cout << "Please enter an integer in the range 1 to 10 (inclusive):\n";
         int n = 0;
         while (true) {
                  if (cin>>n) {                // we got an integer; now check it
                           if (1<=n && n<=10)
                                    return n;
                           cout << "Sorry " << n << " is not in the [1:10] range; please try again\n";
                  }
                  else {
                           cout << "Sorry, that was not a number; please try again\n";
                           skip_to_int();
                  }
         }
}

int main()
{
  
}