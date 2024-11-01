#include <iostream>
using namespace std;
int main()
{
    string Sentence;
    char temp[1];
    int i = 0, j = 0;
    cout << "\nEnter Your Sentence: " << endl;
    getline(cin, Sentence);
    j = Sentence.size() - 1;
    while (i < j)
    {
        temp[0] = Sentence[i];
        Sentence[i] = Sentence[j];
        Sentence[j] = temp[0];
        i++;
        j--;
    }
    cout << "Sentence Is : " << Sentence << endl;
    return 0;
}