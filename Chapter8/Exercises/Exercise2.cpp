#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Name_pairs
{
public:
    void read_names(void);
    void read_age(void);
    void print();

private:
    vector<string> name{};
    vector<double> age{};
};

void Name_pairs::read_age()
{
    int ages;
    cout << "Now enter your age: ";
    cin >> ages;
    age.push_back(ages);
}

void Name_pairs::read_names(void)
{
    string names;
    while (names != "quit")
    {
        cout << "Enter a name(type 'quit' to exit): ";
        cin >> names;
        if (names == "quit")
            break;
        name.push_back(names);
        read_age();
    }

}

void Name_pairs::print()
{
    for (int i = 0; i < name.size(); i++)
    {
        cout << name[i] << "," << age[i] << "\n";
    }
}

int main()
{
    Name_pairs check;
    check.read_names();
    check.print();
}