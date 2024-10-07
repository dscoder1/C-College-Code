#include <iostream>
using namespace std;
int main()
{
    int num1, num2, rem, rem1;
    cout << "\nEnter First Number:" << endl;
    cin >> num1;
    cout << "\nEnter Second Number:" << endl;
    cin >> num2;

    if (num1 > num2)
    {
        rem = num2 % num1;
        while (rem1 != 0)
        {
            rem1 = num1 % rem;
            num1 = rem;
            rem = rem1;
        }
        cout << num1 << endl;
    }
    else
    {
        rem = num1 % num2;
        while (rem1 != 0)
        {
            rem1 = num2 % rem;
            num2 = rem;
            rem = rem1;
        }
        cout << num2 << endl;
    }

    return 0;
}