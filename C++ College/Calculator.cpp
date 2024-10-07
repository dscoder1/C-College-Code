#include <iostream>
using namespace std;
class Calculator
{
public:
    void Add(double d1, double d2)
    {
        cout << "Addition Is " << d1 + d2 << endl;
    }
    void Subtraction(double d1, double d2)
    {
        cout << "Subtraction Is " << d1 - d2 << endl;
    }
    void Multiply(double d1, double d2)
    {
        cout << "Multiplication Is " << d1 * d2 << endl;
    }
    void Divide(double d1, double d2)
    {
        try
        {
            if (d2 == 0)
            {
                throw "Divide By Zero";
            }
            else
            {
                cout << "Divison Is " << d1 / d2 << endl;
            }
        }
        catch (char const *e)
        {
            cout << "Error:" << e << endl;
        }
    }
};
int main()
{
    Calculator Prblm;
    Prblm.Divide(10, 10);
    return 0;
}