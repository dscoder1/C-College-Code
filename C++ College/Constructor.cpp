#include <iostream>
#include <fstream>
using namespace std;
class Constructor
{
    int num1, num2;

public:
    Constructor(int num1, int num2)
    {
        fstream file;
        file.open("Calculator Details.txt", ios::out | ios::app);
        int Choice;
        this->num1 = num1;
        this->num2 = num2;
        cout << endl
             << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit"
             << endl;
        cout << "\nEnter Your Choice:" << endl;
        cin >> Choice;
        switch (Choice)
        {
        case 1:
            cout << "After Addition Result Is:" << this->num1 + this->num2 << endl;
            file << "Addition Is" << this->num1 + this->num2 << endl;
            file.close();
            break;
        case 2:
            cout << "After Subtraction Result Is:" << this->num1 - this->num2 << endl;
            file << "Subtraction Is" << this->num1 - this->num2 << endl;
            file.close();
            break;
        case 3:
            cout << "After Multiplication Result Is:" << this->num1 * this->num2 << endl;
            file << "Multiplication Is" << this->num1 * this->num2 << endl;
            file.close();
            break;
        case 4:
            cout << "After Division Result Is:" << this->num1 / this->num2 << endl;
            file << "Division Is" << this->num1 / this->num2 << endl;
            file.close();
            break;
        case 5:
            file << "Exited From Application" << endl;
            file.close();
            exit(0);
            break;
        default:
            cout << "\nInvalid Choice" << endl;
        }
    }
    void Display()
    {
        fstream file;
        string line;
        int i = 0;
        file.open("Calculator Details.txt", ios::in);
        getline(file, line, '\n');
        while (!file.eof())
        {
            i++;
            cout << i << "Line Is:" << line << endl;
            getline(file, line, '\n');
        }
        file.close();
    }
};
int main()
{
    Constructor One(10, 20);
    One.Display();
    return 0;
}