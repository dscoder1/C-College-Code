#include <iostream>
using namespace std;
int main()
{
    int num, flag = 1;
    cout << "\nEnter A Number:" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
            if (flag = 1)
            {
                cout << "\n"
                     << i << " Is A Prime Number" << endl;
            }
        }
    }
    return 0;
}