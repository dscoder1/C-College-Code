#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int number;
    int chance = 5;
    int N = 3;
    srand(time(0));
    string arr[3] = {"Rock", "Paper", "Scissors"};
    while (chance)
    {
        cout << "Enter Random between 0 and 2:" << endl;
        cin >> number;
        int random = rand() % N;
        if (arr[number] == arr[random])
        {
            cout << "You Win This Time" << endl;
        }
        else
        {
            cout << "Unmatched" << endl;
            cout << "Random:" << random << endl;
            cout << "Your<<" << number << endl;
        }
        chance--;
    }
    return 0;
}