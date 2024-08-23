import<iostream>;

using namespace std;

int main()
{
	double miles = 0;
	double km = 0;

	cout << "Enter the number of miles to convert to km:\n";
	cin >> miles;
	km = miles * 1.609;
	cout << miles << " miles is equal to " << km << " km";
}
