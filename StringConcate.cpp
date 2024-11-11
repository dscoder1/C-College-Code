#include <iostream>
#include <string>
using namespace std;
void Concat(string One, string Two)
{
    cout << "Concated String Is : " << One + " " + Two << endl;
}
int main()
{
    int Val1Length, Val2Length;
    string Val1, Val2;
    cout << "\nEnter First String" << endl;
    getline(cin, Val1);
    cout << "\nFirst String Is :" << endl;
    cout << Val1 << endl;
    cout << "\nEnter Second String" << endl;
    getline(cin, Val2);
    cout << "\nSecond String Is :" << endl;
    cout << Val2 << endl;
    Concat(Val1, Val2);
    return 0;
}
