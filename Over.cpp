#include <iostream>
using namespace std;
class Calculator
{
    float num1, num2;

public:
    Calculator(int a, int b)
    {
        cout << "Addition Is" << (a + b) << endl;
    }
    Calculator(float a, float b)
    {
        cout << "Subtraction Is" << (a - b) << endl;
    }
    Calculator(int a, float b)
    {
        cout << "Multiplication Is" << (a * b) << endl;
    }
    ~Calculator()
    {
        cout << "Called" << endl;
    }
};
int main()
{
    Calculator c1(5.0f, 10.0f);
    Calculator c2(5, 10.0f);
    Calculator c3(5, 10);
    return 0;
}