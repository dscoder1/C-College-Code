#include <iostream>
using namespace std;
int main()
{
    string Sentence;
    int i = 0, j = 0;
    bool flag = true;
    cout << "\nEnter Your String: " << endl;
    getline(cin, Sentence);
    j = Sentence.size() - 1;
    while (i < j)
    {
        if (Sentence[i] != Sentence[j])
        {
            flag = false;
        }
        i++;
        j--;
    }
    if (flag == true)
        cout << "\nPalindrome String\n";
    else
        cout << "\nNot A Palindrome String\n";
    return 0;
}