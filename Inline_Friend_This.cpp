#include <iostream>
using namespace std;
class Person
{
    string Name, Address;
    int Age;
    float Height, Salary;

public:
    Person()
    {
        cout << "\nInput Person Details" << endl;
        cout << "\nPerson Name : " << endl;
        getline(cin, Name);
        cout << "\nPerson Age : " << endl;
        cin >> Age;
        cout << "\nPerson Height : " << endl;
        cin >> Height;
        cout << "\nPerson Salary : " << endl;
        cin >> Salary;
        cout << "\nPerson Address : " << endl;
        cin.ignore();
        getline(cin, Address);
    }

    Person(string Name, int Age, float Height, float Salary, string Address)
    {

        this->Name = Name;
        this->Age = Age;
        this->Height = Height;
        this->Salary = Salary;
        this->Address = Address;
    }
    void Display()
    {
        cout << "\nDetails Of Person Is :" << endl;
        cout << "----------------------------" << endl;
        cout << "\nName : " << Name << endl;
        cout << "\nAge : " << Age << endl;
        cout << "\nHeight: " << Height << endl;
        cout << "\nSalary: " << Salary << endl;
        cout << "\nAddress : " << Address << endl;
    }
    inline int CalcCommission()
    {
        if (Salary >= 20000)
        {
            return Salary * 0.10;
        }
        else
        {
            return Salary * 0.05;
        }
    }
    friend void Creation();
};
void Creation()
{
    Person Three;
    Three.Display();
    cout << "Your Commission Is :" << Three.CalcCommission() << endl;
}
int main()
{
    Person One;
    One.Display();
    cout << "Your Commission Is :" << One.CalcCommission() << endl;
    Person Two("Divya Shakti", 18, 5.5, 20000, "Lodipur");
    Two.Display();
    cout << "Your Commission Is :" << Two.CalcCommission() << endl;
    Creation();
    return 0;
}