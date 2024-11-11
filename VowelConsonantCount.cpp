#include <iostream>
#include <string>
using namespace std;
int main()
{
    int Vowel = 0, Consonant = 0;
    string Val;
    cout << "\nEnter A String" << endl;
    getline(cin, Val);
    cout << "\nString Is :" << endl;
    cout << Val << endl;
    for (int i = 0; i < Val.length(); i++)
    {
        if (Val[i] == 'a' || Val[i] == 'e' || Val[i] == 'i' || Val[i] == 'o' || Val[i] == 'u' || Val[i] == 'A' || Val[i] == 'E' || Val[i] == 'I' || Val[i] == 'O' || Val[i] == 'U')
        {
            Vowel++;
        }
        else
        {
            Consonant++;
        }
    }
    cout << "\nTotal Number Of Vowel In " << Val << " Is :" << Vowel << endl;
    cout << "\nTotal Number Of Consonant In " << Val << " Is :" << Consonant << endl;
    return 0;
}