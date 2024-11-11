#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    string Val1, Val2;
    cout << "\nEnter First String" << endl;
    getline(cin, Val1);
    cout << "\nFirst String Is :" << endl;
    cout << Val1 << endl;
    cout << "\nEnter Second String" << endl;
    getline(cin, Val2);
    cout << "\nSecond String Is :" << endl;
    cout << Val2 << endl;
    if (Val1 == Val2)
    {
        cout << "\nString Are Equal" << endl;
    }
    else
    {
        cout << "\nString Are Unequal" << endl;
    }
    return 0;
}