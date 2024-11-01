#include <iostream>
using namespace std;
int main()
{
    string Sentence1, Sentence2;
    cout << "\nEnter Your First Sentence: " << endl;
    getline(cin, Sentence1);
    cout << "\nEnter Your Second Sentence: " << endl;
    getline(cin, Sentence2);
    if (Sentence1 == Sentence2)
    {
        cout << "\nBoth Sentence Are Equal\n";
    }
    else
    {
        cout << "\nBoth Sentence Are Different\n";
    }
    return 0;
}