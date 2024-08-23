import<iostream>;

using namespace std;

int main()
{
	string num;
	int str_to_num = 0;

	cout << "Spell out a number and I will show you the digit:\n";
	while (cin >> num) {
		if (num == "zero")
		{
			str_to_num = 0;
			cout << str_to_num << " not a number I know\n";
		}
		else if (num == "one")
		{
			str_to_num = 1;
			cout << str_to_num << " not a number I know\n";
		}
		else if (num == "two")
		{
			str_to_num = 2;
			cout << str_to_num << " not a number I know\n";
		}
		else if (num == "three")
		{
			str_to_num = 3;
			cout << str_to_num << " not a number I know\n";
		}
		else if (num == "four")
		{
			str_to_num = 4;
			cout << str_to_num << " not a number I know\n";
		}
		else 
		{
			cout << "stupid computer!\n";
		}
		cout << "Spell out a number and I will show you the digit:\n";
	}
}