#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;
fstream file;
class Bank
{
    string HolderName;
    int AcctN;
    string IFSC;
    int Amount;
    int MobileNumber;
    int AadharNumber;

public:
    Bank(string HolderName, int Amount, int MobileNumber, int AadharNumber)
    {
        srand(time(0));
        int number;
        string str;
        for (int i = 0; i < 3; i++)
        {
            number = rand();
            str += to_string(number);
        }
        cout << str << endl;

        /*  string HolderName1;
          int AcctN1, Amount1, MobileNumber1, AadharNumber1;
          cout << "Enter Holder Name: ";
          cin.ignore();
          getline(cin, HolderName1);
          cout << "Enter Account Number:";
          cin >> AcctN1;
          cout << "Enter Amount:";
          cin >> Amount1;
          cout << "Enter Mobile Number:";
          cin >> MobileNumber1;
          cout << "Enter Aadhar Number:";
          cin >> AadharNumber1;
          */

        this->HolderName = HolderName;
        this->AcctN = number;
        this->IFSC = "SBINOO001415";
        this->Amount = Amount;
        this->MobileNumber = MobileNumber;
        this->AadharNumber = AadharNumber;
    }
    void Details()
    {
        cout << "Holder Name:" << this->HolderName << endl;
        cout << "Account Number:" << this->AcctN << endl;
        cout << "Amount:" << this->Amount << endl;
        cout << "Mobile Number:" << this->MobileNumber << endl;
        cout << "Aadhar Number:" << this->AadharNumber << endl;
    }
    void Withdraw()
    {
        int Amt;
        char flag;
        cout << "You Want To Withdraw:(y or n)" << endl;
        cin >> flag;
        if (flag == 'y' or flag == 'Y')
        {
            cout << "Enter Amount You Want To Withdraw:";
            cin >> Amt;
            if (this->Amount > Amt)
            {
                this->Amount = this->Amount - Amt;
                cout << "Withdraw Successfully From " << HolderName << endl;
                cout << "Remaining Balance Of " << HolderName << " Is " << this->Amount << endl;
            }
            else if (this->Amount == 0)
            {
                cout << "Remaining Balance Is " << this->Amount << endl;
                throw "Insufficient Balance To Witdraw";
            }
            else
            {
                cout << "Remaining Balance Is " << this->Amount << endl;
                throw "Insufficient Balance To Witdraw";
            }
        }
    }
    void Deposit()
    {
        int Amt;
        char flag;
        cout << "You Want To Deposit:(y or n)" << endl;
        cin >> flag;
        if (flag == 'y' or flag == 'Y')
        {
            cout << "Enter Amount You Want To Deposit:";
            this->Amount = this->Amount + Amt;
            cout << "Deposited Successfully To" << HolderName << endl;
            cout << "Total Balance Of " << HolderName << " Is " << this->Amount << endl;
        }
    }
    void Save()
    {
        char flag;
        cout << "You Want To Save Details Of User:" << endl;
        cin >> flag;
        if (flag == 'y' or flag == 'Y')
        {
            file.open("Details", ios::out | ios::app);
            file << this->HolderName << "*" << this->AcctN << "*" << this->IFSC << "*" << this->Amount << "*" << this->MobileNumber << "*" << this->AadharNumber << endl;
            file.close();
        }
    }

    ~Bank()
    {
        cout << "Account Closed" << endl;
    }
};
int main()
{
    try
    {
        Bank Person1("Divya Shakti", 5000, 123456, 12345);
        Person1.Details();
        Person1.Withdraw();
        Person1.Withdraw();
        Person1.Save();
    }
    catch (char const *e)
    {
        cout << "ERROR:" << e << endl;
    }
    catch (...)
    {
        cout << "ERROR" << endl;
    }
    return 0;
}