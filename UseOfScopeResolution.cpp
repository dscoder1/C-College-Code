#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void input();
    void Display();
};
void Complex ::input()
{
    cout << "\nInput Complex Number Details" << endl;
    cout << "\nReal Part : " << endl;
    cin >> real;
    cout << "\nImaginary Part: " << endl;
    cin >> imaginary;
}
void Complex ::Display()
{
    cout << "\nDetails Of Complex Number Is :" << endl;
    cout << "----------------------------" << endl;
    cout << "\nReal Part Is : " << real << endl;
    cout << "\nImaginary Part Is : " << imaginary << endl;
    cout << "\nNumber Is : " << real << " + " << imaginary << "i " << endl;
}
int main()
{
    Complex One;
    One.input();
    One.Display();
    return 0;
}