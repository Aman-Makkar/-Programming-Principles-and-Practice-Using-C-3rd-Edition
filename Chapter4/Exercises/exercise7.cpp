#include <iostream>
#include <complex>

using namespace std;

static void quadratic(const double a, const double b, const double c)
{
  if (a == 0.0)
  {
    cout << "a = 0; so can not derive any roots\n";
  }
  auto sq{b * b - 4.0 * a * c};
  // When b^2 - 4ac == 0 there is one real root.
  if (sq == 0.0)
  {
    std::cout << "x = " << -1.0 * b / (2 * a) << std::endl;
  }
  // When b^2 - 4ac > 0 there are two real roots.
  else if (sq > 0.0)
  {
    std::cout << "x = " << (-1.0 * b + sqrt(sq)) / (2.0 * a) << std::endl;
    std::cout << "x = " << (-1.0 * b - sqrt(sq)) / (2.0 * a) << std::endl;
  }
  // When b^2 - 4ac < 0 there are two complex roots.
  else
  {
    std::cout << "x = " << (-1.0 * b) / (2.0 * a) << " + " << sqrt(fabs(sq)) / (2.0 * a) << "i" << std::endl;
    std::cout << "x = " << (-1.0 * b) / (2.0 * a) << " - " << sqrt(fabs(sq)) / (2.0 * a) << "i" << std::endl;
  }
}

int main()
try
{
  std::cout << "Enter the a, b and c variables to solve the quadratic equation:\n";
  double a{};
  double b{1.0};
  double c{};
  if (!(std::cin >> a >> b >> c))
  {
    cout << "a non-numeric number entered.";
  }
  else
  {
    quadratic(a, b, c);
  }

  return 0;
}
catch (std::exception &e)
{
  std::cerr << "error: " << e.what() << '\n';
  return 1;
}
catch (...)
{
  std::cerr << "Oops: unknown exception!\n";
  return 2;
}