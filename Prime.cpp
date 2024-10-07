#include <iostream>
using namespace std;
int main()
{
    int number, flag = 0;
    cout << "Enter A Number:";
    cin >> number;
    for (int j = 1; j <= number; j++)
    {
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cout << j << " Composite Number" << endl;
        }
        else
        {
            cout << j << " Prime Number" << endl;
        }
    }
    return 0;
}