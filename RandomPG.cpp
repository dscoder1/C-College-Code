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
    string Pass;
    string MixPassword = "zxcvbnmlkjhgfdsaqwertyuiopZXCVBNMLKJHGFDSAQWERTYUIOP123654789";
    string NumberPassword = "0123654789";
    string UpperPassword = "ZXCVBNMLKJHGFDSAQWERTYUIOP";
    string LowerPassword = "zxcvbnmlkjhgfdsaqwertyuiop";
    string LowerUpperPassword = "zxcvbnmlkjhgfdsaqwertyuiopZXCVBNMLKJHGFDSAQWERTYUIOP";

    do
    {
        cout << "\n1.Generate Mix Password\n2.Number Password\n3.Upper Case Password\n4.Lower Case Password\n5.Lower Upper Case Password\n6.Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << "Enter Length Of Password:";
        cin >> len;
        switch (choice)
        {
        case 1:
            pass(len, MixPassword);
            break;
        case 2:
            pass(len, NumberPassword);
            break;
        case 3:
            pass(len, UpperPassword);
            break;
        case 4:
            pass(len, LowerPassword);
            break;
        case 5:
            pass(len, LowerUpperPassword);
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 6);
    cout << "Random Password Of " << len << " Is " << Pass;
    return 0;
}