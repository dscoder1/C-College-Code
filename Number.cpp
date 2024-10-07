#include <iostream>
using namespace std;
int main()
{
    int arr[10], odd = 0, even = 0, neg = 0, pos = 0, zero = 0;
    cout << "Enter Ten Numbers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    cout << "Number Of Odd Numbers:" << odd;
    cout << endl
         << "Number Of Even Numbers:" << even;
    cout << endl
         << "Number Of Positive Numbers:" << pos;
    cout << endl
         << "Number Of Negative Numbers:" << neg;
    cout << endl
         << "Number Of Zero Numbers:" << zero;
    return 0;
}