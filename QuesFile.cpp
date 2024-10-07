#include <iostream>
#include <string>
#include <fstream>
fstream file;
string Question, Option;
using namespace std;
void Question()
{
    file.open("Question", ios::out | ios::app);
    cout << "Enter Question" << endl;
    getline(cin, Question);
    cout << "Enter Option" << endl;
    getline(cin, Option);
    file << Question << "*" << Option << endl;
    file.close();
}
int main()
{
    cout << "Question" << endl;
    int choice;
    cout << "\nEnter Your Choice:" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        Question();
        break;
    case 2:
        Display();
        break;
    case 3:
        exit(0);
        break;
    default:
        cout << "\nInvalid Choice" << endl;
    }

    file.open("Question", ios::in);
    getline(file, Question, '*');
    getline(file, Option, '\n');
    return 0;
}