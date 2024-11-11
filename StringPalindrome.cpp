#include <iostream>
#include <string>
using namespace std;
int main()
{
    int start = 0, last, flag = 1;
    string Val;
    cout << "\nEnter A String" << endl;
    getline(cin, Val);
    cout << "\nString Is :" << endl;
    cout << Val << endl;
    last = Val.length() - 1;
    while (start < last)
    {
        if (Val[start] != Val[last])
        {
            flag = 0;
            break;
        }
        start++;
        last--;
    }
    if (flag == 0)
    {
        cout << "\nNot A Palindrome String" << endl;
    }
    else
    {
        cout << "\nA Palindrome String" << endl;
    }
    return 0;
}