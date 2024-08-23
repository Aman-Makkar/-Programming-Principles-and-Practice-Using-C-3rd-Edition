import<iostream>;

using namespace std;

int main()
{
	int num = 0;

	cout << "Enter a number to check if it is odd or even:\n";
	while (cin >> num) {

		if (num % 2 == 0)
		{
			cout << "The value " << num << " is an even number.\n";
		}
		else
		{
			cout << "The value " << num << " is an odd number.\n";
		}
		cout << "Enter a number to check if it is odd or even:\n";
	}
}