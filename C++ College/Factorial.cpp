#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1;
    cout << "Enter A Number:" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial Of " << num << " Is :" << fact;

    return 0;
}