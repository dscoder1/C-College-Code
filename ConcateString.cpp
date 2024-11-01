#include <iostream>
using namespace std;
int main()
{
    // string Sentence1, Sentence2;
    // int j = 0;
    // getline(cin, Sentence1);
    // getline(cin, Sentence2);
    // for (int i = Sentence1.size(); i < Sentence1.size() + Sentence2.size(); i++)
    // {
    //     Sentence1[i] = Sentence2[j];
    //     j++;
    //     cout << Sentence1 << endl;
    // }
    // cout << Sentence1 << endl;
    char Sentence1[10], Sentence2[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> Sentence1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> Sentence2[i];
    }
    int i1 = 0, i2 = 0, len1 = 0, len2 = 0;
    while (Sentence1[i1] != '\0')
    {
        len1++;
        i1++;
    }
    while (Sentence1[i2] != '\0')
    {
        len2++;
        i2++;
    }
    cout << len1;
    cout << len2;
    for (int i = 0; i < len2; i++)
    {
        Sentence1[++len1] = Sentence2[i];
        cout << Sentence1 << endl;
    }
    cout << Sentence1 << endl;
    return 0;
}