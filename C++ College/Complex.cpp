#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;

public:
    Complex Add(Complex);
    Complex Sub(Complex);
    Complex Mul(Complex);
    void Display();
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    Complex()
    {
    }
};
Complex Complex ::Add(Complex One)
{
    Complex Num;
    Num.real = real + One.real;
    Num.imaginary = imaginary + One.imaginary;
    return Num;
}
Complex Complex ::Sub(Complex One)
{
    Complex Num;
    Num.real = real - One.real;
    Num.imaginary = imaginary - One.imaginary;
    return Num;
}

Complex Complex ::Mul(Complex One)
{
    Complex Num;
    Num.real = real * One.real;
    Num.imaginary = imaginary * One.imaginary;
    return Num;
}
void Complex::Display()
{
    cout << "Complex Number Is:" << endl;
    cout << "Real Part:" << this->real << endl;
    cout << "Imaginary Part:" << this->imaginary << endl;
    cout << "Number Is: " << this->real << " + " << this->imaginary << "i" << endl;
}
int main()
{
    int num1, num2, num3, num4;
    cout << "\nEnter Real Part Of First Complex Number:" << endl;
    cin >> num1;
    cout << "\nEnter Imaginary Part Of First Complex Number:" << endl;
    cin >> num2;
    cout << "\nEnter Real Part Of Second Complex Number:" << endl;
    cin >> num3;
    cout << "\nEnter Imaginary Part Of Second Complex Number:" << endl;
    cin >> num4;
    Complex Cmplx(num1, num2);
    Complex Cmplx1(num3, num4);
    Cmplx = Cmplx.Add(Cmplx1);
    Cmplx.Display();
    Cmplx = Cmplx.Sub(Cmplx1);
    Cmplx.Display();
    Cmplx = Cmplx.Mul(Cmplx1);
    Cmplx.Display();
    return 0;
}