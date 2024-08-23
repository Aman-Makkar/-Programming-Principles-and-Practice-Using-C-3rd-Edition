import<iostream>;
import<algorithm>;

using namespace std;

int main()
{
    string strArray[3];

    cout << "input 3 string values with spaces between them\n";
    cin >> strArray[0] >> strArray[1] >> strArray[2];

    //Called from Algorithm module
    sort(strArray, strArray + 3);

    cout << strArray[0] << ", " << strArray[1] << ", " << strArray[2];

    return 0;
}