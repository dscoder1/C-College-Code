#include <iostream>
using namespace std;
class Person
{
    string Name, Address;
    int Age;
    float Height;

public:
    void input()
    {
        cout << "\nInput Person Details" << endl;
        cout << "\nPerson Name : " << endl;
        getline(cin, Name);
        cout << "\nPerson Age : " << endl;
        cin >> Age;
        cout << "\nPerson Height : " << endl;
        cin >> Height;
        cout << "\nPerson Address : " << endl;
        cin.ignore();
        getline(cin, Address);
    }
    void Display()
    {
        cout << "\nDetails Of Person Is :" << endl;
        cout << "----------------------------" << endl;
        cout << "\nName : " << Name << endl;
        cout << "\nAge : " << Age << endl;
        cout << "\nHeight: " << Height << endl;
        cout << "\nAddress : " << Address << endl;
    }
};
int main()
{
    Person One;
    One.input();
    One.Display();
    return 0;
}