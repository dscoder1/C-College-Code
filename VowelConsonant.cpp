#include <iostream>
using namespace std;
int main()
{
    string Sentence;
    int Vowel = 0, Consonant = 0;
    cout << "\nEnter Your Sentence: " << endl;
    getline(cin, Sentence);
    cout << "Your Sentence Is : " << Sentence << endl;
    for (int i = 0; i < Sentence.size(); i++)
    {
        if (Sentence[i] == 'a' || Sentence[i] == 'e' || Sentence[i] == 'i' || Sentence[i] == 'o' || Sentence[i] == 'u' || Sentence[i] == 'A' || Sentence[i] == 'E' || Sentence[i] == 'I' || Sentence[i] == 'O' || Sentence[i] == 'U')
        {
            Vowel++;
        }
        else
        {
            Consonant++;
        }
    }
    cout << "\nTotal Number Of Vowels:" << Vowel;
    cout << "\nTotal Number Of Consonants:" << Consonant;
    return 0;
}