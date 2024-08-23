import<iostream>;
import<string>;
import<vector>;

using namespace std;

int main()
{
	vector<char> test;
	vector<int>test1;

	for (char temp; cin >> temp;)
	{
		test.push_back(temp);
		test1.push_back(temp);
	}

	for (int i = 0; i < test.size(); i++)
	{
		cout << "Num value = " << test1[i] << " String value = " << test[i] << "\n";
	}
}
