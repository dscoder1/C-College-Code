#include <iostream>
using namespace std;
#define maxsize 100
bool search1(int a[], int ttl, int Search)
{
    bool res;
    for (int i = 0; i < ttl; i++)
    {
        if (a[i] == Search)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[maxsize], total, search;
    bool result;
    cout << "\nEnter Total number Of Element In Array" << endl;
    cin >> total;
    cout << "\nEnter All Array element:" << endl;
    for (int i = 0; i < total; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter Searching Element" << endl;
    cin >> search;
    result = search1(arr, total, search);
    if (result == 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}