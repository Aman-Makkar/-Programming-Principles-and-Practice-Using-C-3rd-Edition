import<iostream>;
using namespace std;

int main()
{
	int val1 = 0;
	int val2 = 0;

	cout << "Please enter two values:\n";
	cin >> val1 >> val2;

	if (val1 < val2)
	{
		cout << "Smaller = " << val1<<"\n";
	}
	else
	{
		cout << "Smaller = " << val2<<"\n";
	}

	if (val1 > val2)
	{
		cout << "Larger = " << val1<<"\n";
	}
	else
	{
		cout << "Larger = " << val2<<"\n";
	}

	cout << "Sum = " << val1 + val2 << "\n"
		<< "Difference = " << val1 - val2 << "\n"
		<< "Product = " << val1 * val2 << "\n"
		<< "Ratio = " << val1 % val2 << "\n";
}