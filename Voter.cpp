#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "\nEnter Your Age:" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "You Are Eligible For Voting" << endl;
    }
    else
    {
        cout << "\nYou Are Not Eligible For Voting" << endl;
    }
    return 0;
}