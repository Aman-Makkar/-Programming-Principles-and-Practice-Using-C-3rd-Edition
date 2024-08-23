import<iostream>;
import<vector>;

using namespace std;

int main()
{
	vector<double>nums;

	for (double num; cin >> num;)
		nums.push_back(num);

	double smallest = nums[0];
	double greatest = nums[0];
	double sum = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];
		if (nums[i] > greatest)
			greatest = nums[i];
		if (nums[i] < smallest)
			smallest = nums[i];
	}

	cout << "The sum is " << sum << "\n";
	cout << "The greatest distance is " << greatest << "\n";
	cout << "The smallest distance is " << smallest << "\n";
}