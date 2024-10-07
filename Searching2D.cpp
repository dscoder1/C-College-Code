#include <iostream>
using namespace std;
#define maxsize 100
bool search1(int a[maxsize][maxsize], int ttlrow, int ttlcol, int Search)
{
    bool res;
    for (int i = 0; i < ttlrow; i++)
    {
        for (int j = 0; j < ttlcol; j++)
        {

            if (a[i][j] == Search)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[maxsize][maxsize], totalrow, totalcol, search;
    bool result;
    cout << "\nEnter Total number Of Row" << endl;
    cin >> totalrow;
    cout << "\nEnter Total number Of Column" << endl;
    cin >> totalcol;
    cout << "\nEnter All Array element:" << endl;
    for (int i = 0; i < totalrow; i++)
    {
        for (int j = 0; j < totalcol; j++)
        {

            cin >> arr[i][j];
        }
    }
    cout << "\nEnter Searching Element" << endl;
    cin >> search;
    result = search1(arr, totalrow, totalcol, search);
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