#include <iostream>
using namespace std;
int main()
{
    int sum = 0, mean;
    int arr[5];
    int si = (sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < si; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < si; i++)
    {
        sum += arr[i];
    }
    mean = sum / si;
    cout << mean << endl;
    return 0;
}