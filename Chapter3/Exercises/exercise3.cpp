import<iostream>;
import<vector>;
import<algorithm>;

using namespace std;

int main()
{
    vector<double> temps;
    for (double temp; cin >> temp; )
        temps.push_back(temp);

    double sum = 0;
    for (auto x : temps) sum += x;
    cout << "Average temperature: " << sum / temps.size() << '\n';

    sort(temps.begin(), temps.end());
    double median{ 0 };
    int idx = temps.size() / 2;
    if (temps.size() % 2 == 0)
        median = (temps[idx - 1] + temps[idx]) / 2;
    else
        median = temps[idx];

    cout << "Median temperature: " << median << '\n';
}