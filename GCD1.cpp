#include <iostream>
using namespace std;
int num(int a, int b)
{
    int min;
    min = a;
    if (b < a)
        min = b;
    return min;
}
int main()
{
    int num0, num1, hcf = 1;
    cout << "\nEnter Your First Number" << endl;
    cin >> num0;
    cout << "\nEnter Your Second Number" << endl;
    cin >> num1;
    int min = num(num0, num1);
    for (int i = 0; i <= min; i++)
    {
        if (num0 % i == 0 && num1 % i == 0)
        {
            hcf = i;
            cout << hcf << endl;
        }
    }
    cout << endl
         << hcf << endl;
    return 0;
}