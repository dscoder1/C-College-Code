#include <iostream>
#include <string>
using namespace std;
int main()
{
    int start = 0, last;
    char temp;
    string Val;
    cout << "\nEnter A String" << endl;
    getline(cin, Val);
    cout << "\nOriginal String Is :" << endl;
    cout << Val << endl;
    last = Val.length() - 1;
    while (start < last)
    {
        temp = Val[start];
        Val[start] = Val[last];
        Val[last] = temp;
        start++;
        last--;
    }
    cout << "\nAfter Reversing String  Is: " << endl;
    cout << Val;

    return 0;
}