#include <iostream>
using namespace std;
int ChckArm(int num)
{
    int now = num;
    int rem, arm = 0;
    while (num != 0)
    {
        rem = num % 10;
        arm = arm + (rem * rem * rem);
        num = num / 10;
    }
    if (arm == now)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number, res;
    cout << "\nEnter A Number:" << endl;
    cin >> number;
    res = ChckArm(number);
    cout << res << endl;
    return 0;
}