#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int Chance = 0, flag = 1;
    srand(time(0));
    while (flag)
    {
        int number, random;
        cout << "Enter Number Between 1 and 10:";
        cin >> number;
        random = rand() % 11;
        if (number == random)
        {
            cout << "Random Number:" << random << endl;
            cout << "Your Number:" << number << endl;
            cout << "Matched Successfully" << endl;
            Chance++;
            flag = 0;
        }
        else if (number > random)
        {
            cout << "Random Number:" << random << endl;
            cout << "Your Number:" << number << endl;
            cout << "Random Number Is Less Than Your Number" << endl;
            Chance++;
        }
        else
        {
            cout << "Random Number:" << random << endl;
            cout << "Your Number:" << number << endl;
            cout << "Randokm Number Is More Than Your Number" << endl;
            Chance++;
        }
    }
    cout << "You Matched In " << Chance << " Chances" << endl;
    return 0;
}