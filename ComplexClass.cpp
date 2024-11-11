#include <iostream>
using namespace std;
class Complex
{
    int Real, Imaginary;

public:
    Complex()
    {
    }
    Complex(int Real, int Imaginary)
    {
        this->Real = Real;
        this->Imaginary = Imaginary;
    }
    void Add(Complex One, Complex Two)
    {
        cout << "\nAfter Addition Real Part Is : " << One.Real + Two.Real << endl;
        cout << "\nAfter Addition Imaginary Part Is : " << One.Imaginary + Two.Imaginary << endl;
        cout << "\nAfter Addition Complex Number Is :" << One.Real + Two.Real << "+" << One.Imaginary + Two.Imaginary << "i" << endl;
    }
    void ComplexDisplay()
    {
        cout << "\nReal Part Of Complex Number Is :" << this->Real << endl;
        cout << "\nImaginary Part Of Complex Number Is :" << this->Imaginary << endl;
    }
};

class Person
{
    string Name, Address;
    float Height;
    int Age;

public:
    void Input();
    void PersonDisplay();
};
void Person::Input()
{
    cout << "\nEnter Person Name:";
    cin.ignore();
    getline(cin, Name);
    cout << "\nEnter Person Age:";
    cin >> Age;
    cout << "\nEnter Person Height:";
    cin >> Height;
    cout << "\nEnter Person Address:";
    cin.ignore();
    getline(cin, Address);
}
void Person::PersonDisplay()
{
    cout << "\nPerson Details: " << endl;
    cout << "\nPerson Name: " << this->Name;
    cout << "\nPerson Age: " << this->Age;
    cout << "\nPerson Height: " << this->Height;
    cout << "\nPerson Address: " << this->Address;
}
int main()
{
    Complex COne(5, 10), CTwo(7, 20);
    COne.ComplexDisplay();
    CTwo.ComplexDisplay();
    COne.Add(COne, CTwo);
    Person POne, PTwo;
    POne.Input();
    POne.PersonDisplay();
    PTwo.Input();
    PTwo.PersonDisplay();
    return 0;
}