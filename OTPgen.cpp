#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string pass(int length1, string Pass)
{
    int randomIndex;
    string Password = " ";

    for (int i = 0; i < length1; i++)
    {
        randomIndex = rand() % Pass.length();
        Password = Password + Pass[randomIndex];
    }
    cout << "Random Password Of " << length1 << " Is :" << Password << endl;
}
int main()
{
    int len, choice;
    string Pass = "1234567890";
    do
    {
        cout << "1.4 Digit\n2.6 Digit\n3.Exit\n"
             << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << "Enter Length Of Password(4 or 6):";
        cin >> len;
        switch (choice)
        {
        case 1:
            pass(len, Pass);
            break;
        case 2:
            pass(len, Pass);
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 3);
    return 0;
}
