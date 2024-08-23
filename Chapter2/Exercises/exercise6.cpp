import<iostream>;
import<algorithm>;

using namespace std;

int main()
{
    int intArray[3] = { 0, 0, 0 };

    cout << "input 3 integers values with spaces between them\n";
    cin >> intArray[0] >> intArray[1] >> intArray[2];

    //Since you are using std you should have this sort method
    sort(intArray, intArray + 3);

    cout << intArray[0] << ", " << intArray[1] << ", " << intArray[2];

    return 0;
}