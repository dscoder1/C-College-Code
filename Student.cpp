#include <iostream>
using namespace std;
class Student
{
    string Name, Address;
    int Age;
    float Height;

public:
    Student()
    {
        // Default Constructor
    }
    Student(string Name, int Age, int Height, string Address)
    {
        // Parameterised Constructor

        this->Name = Name;
        this->Age = Age;
        this->Height = Height;
        this->Address = Address;
    }
    Student(Student &St)
    {
        // Copy Constructor

        Name = St.Name;
        Age = St.Age;
        Height = St.Height;
        Address = St.Address;
    }
    void Display()
    {
        cout << "\nDetails Of Student Is :" << endl;
        cout << "----------------------------" << endl;
        cout << "\nName : " << Name << endl;
        cout << "\nAge : " << Age << endl;
        cout << "\nHeight: " << Height << endl;
        cout << "\nAddress : " << Address << endl;
    }
};
int main()
{
    Student One;
    Student Two("Divya Shakti", 18, 5.5, "Lodipur");
    Student Three(Two);
    One.Display();
    Two.Display();
    Three.Display();
    return 0;
}