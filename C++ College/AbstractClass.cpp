#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
using namespace std;
class Bank
{
    virtual void add() = 0;
    virtual void Display() = 0;
};
class SavingAccount : public Bank
{
    string FirstName, SecondName, Email, AccountNumber, Amount, Mobile;
    fstream file;

public:
    int randomNumber;

public:
    void add()
    {

        file.open("SavingAccount", ios::app | ios::out);
        cout << "\nEnter First Name:" << endl;
        cin.ignore();
        getline(cin, FirstName);
        cout << "\nEnter Second Name:" << endl;
        getline(cin, SecondName);
        cout << "\nEnter Email Address:" << endl;
        getline(cin, Email);
        for (int i = 0; i < 15; i++)
        {
            randomNumber = rand() % 9;
            AccountNumber += to_string(randomNumber);
        }
        cout << AccountNumber << endl;
        cout << "\nEnter Amount:" << endl;
        getline(cin, Amount);
        cout << "\nEnter Mobile Number:" << endl;
        getline(cin, Mobile);

        if (FirstName == " ")
        {
            cout << "Fill First Name Field" << endl;
        }
        else if (SecondName == " ")
        {
            cout << "Fill Second Name Field" << endl;
        }
        else if (Email == " ")
        {
            cout << "Fill Email Field" << endl;
        }
        else if (Amount == " ")
        {
            cout << "Fill Amount Field" << endl;
        }
        else if (Mobile == " ")
        {
            cout << "Fill Mobile Number Field" << endl;
        }
        else
        {
            cout << "Valid All Data Field" << endl;
        }
        file << FirstName << "*" << SecondName << "*" << Email << "*" << AccountNumber << "*" << Amount << "*" << Mobile << endl;
        file.close();
        cout << "Data Inserted Successfully" << endl;
    }
    void Display()
    {
        cout << "\nStudent Details" << endl;
        file.open("SavingAccount", ios::in);
        getline(file, FirstName, '*');
        getline(file, SecondName, '*');
        getline(file, Email, '*');
        getline(file, Amount, '*');
        getline(file, Mobile, '*');
        while (!file.eof())
        {
            cout << "\nFirst Name:" << FirstName << endl;
            cout << "\nSecond Name:" << SecondName << endl;
            cout << "\nEmail:" << Email << endl;
            cout << "\nAmount:" << Amount << endl;
            cout << "\nMobile Number:" << Mobile << endl;
            getline(file, FirstName, '*');
            getline(file, SecondName, '*');
            getline(file, Email, '*');
            getline(file, Amount, '*');
            getline(file, Mobile, '\n');
        }
        file.close();
    }
} Savingobj;
class CurrentAccount : public Bank
{
    string FirstName, SecondName, Email, AccountNumber, Amount, Mobile;
    fstream file;

public:
    int randomNumber;

public:
    void add()
    {
        file.open("CurrentAccount", ios::app | ios::out);
        cout << "\nEnter First Name:" << endl;
        cin.ignore();
        getline(cin, FirstName);
        cout << "\nEnter Second Name:" << endl;
        getline(cin, SecondName);
        cout << "\nEnter Email Address:" << endl;
        getline(cin, Email);
        for (int i = 0; i < 15; i++)
        {
            randomNumber = rand() % 9;
            AccountNumber += to_string(randomNumber);
        }
        cout << AccountNumber << endl;
        cout << "\nEnter Amount:" << endl;
        getline(cin, Amount);
        cout << "\nEnter Mobile Number:" << endl;
        getline(cin, Mobile);

        if (FirstName == " ")
        {
            cout << "Fill First Name Field" << endl;
        }
        else if (SecondName == " ")
        {
            cout << "Fill Second Name Field" << endl;
        }
        else if (Email == " ")
        {
            cout << "Fill Email Field" << endl;
        }
        else if (Amount == " ")
        {
            cout << "Fill Amount Field" << endl;
        }
        else if (Mobile == " ")
        {
            cout << "Fill Mobile Number Field" << endl;
        }
        else
        {
            cout << "Valid All Data Field" << endl;
        }
        file << FirstName << "*" << SecondName << "*" << Email << "*" << Amount << "*" << Mobile << endl;
        file.close();
        cout << "Data Inserted Successfully" << endl;
    }
    void Display()
    {
        cout << "\nStudent Details" << endl;
        file.open("CurrentAccount", ios::in);
        getline(file, FirstName, '*');
        getline(file, SecondName, '*');
        getline(file, Email, '*');
        getline(file, Amount, '*');
        getline(file, Mobile, '*');
        while (!file.eof())
        {
            cout << "\nFirst Name:" << FirstName << endl;
            cout << "\nSecond Name:" << SecondName << endl;
            cout << "\nEmail:" << Email << endl;
            cout << "\nAmount:" << Amount << endl;
            cout << "\nMobile Number:" << Mobile << endl;
            getline(file, FirstName, '*');
            getline(file, SecondName, '*');
            getline(file, Email, '*');
            getline(file, Amount, '*');
            getline(file, Mobile, '\n');
        }
        file.close();
    }
} Currentobj;
int main()
{
    srand(time(0));
    int choice;
    cout << "\nBanking Managment System" << endl;
    cout << "****************************" << endl;
    cout << "\n1.Add Customers To Saving Account\n2.Add Customers To Current Account\n3.Display Saving Account Details\n4.Display Current Account Details\n"
         << endl;
    do
    {
        cout << "\nEnter Your choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            Savingobj.add();
            break;
        case 2:
            Currentobj.add();
            break;
        case 3:
            Savingobj.Display();
            break;
        case 4:
            Currentobj.Display();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "\nInvalid Choice" << endl;
        }
    } while (choice != 5);
    return 0;
}