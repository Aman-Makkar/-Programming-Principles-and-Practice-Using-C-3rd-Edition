#include <iostream>

using namespace std;

int main()
{
  cout << "Please enter expression (we can handle + and -): ";
  int lval = 0;
  int rval = 0;
  char op = 0;
  int res = 0;
  cin >> lval >> op >> rval;

  if (op == '+')
    res = lval + rval;
  else if (op == '-')
    res = lval - rval;
  cout << "Result: " << res << '\n';
}