#include <iostream>
#include <fstream>
#include <string>
using namespace std;
fstream file;
void Login()
{
    string User, password, User1, Contact1, email1, password1, cpassword1;
    cout << "Enter UserName:";
    cin >> User;
    cout << "Enter Password:";
    cin >> password;
    file.open("System", ios::in);
    getline(file, User1, ' ');
    getline(file, Contact1, ' ');
    getline(file, email1, ' ');
    getline(file, password1, ' ');
    getline(file, cpassword1, '\n');
    while (!file.eof())
    {
        if (User == User1 && password == password1)
        {
            cout << "Login Successfully" << endl;
            return;
        }
        getline(file, User1, ' ');
        getline(file, Contact1, ' ');
        getline(file, email1, ' ');
        getline(file, password1, ' ');
        getline(file, cpassword1, '\n');
    }
    cout << "Login UnSuccessful Due To Invalid Details" << endl;
    file.close();
}
void Registration()
{
    string User, Contact, email, password, cpassword;
    cout << "Enter UserName:";
    cin >> User;
    cout << "Enter Contact Number:";
    cin >> Contact;
    cout << "Enter Email Id:";
    cin >> email;
    cout << "Enter Password:";
    cin >> password;
    cout << "Enter Confirm Password:";
    cin >> cpassword;
    file.open("System", ios::app | ios::out);
    if (password != cpassword)
    {

        cout << "Password And Confirm Password Are UnMatched:" << endl;
        cout << "Give Details Again" << endl;
        Registration();
    }
    file << User << " " << Contact << " " << email << " " << password << " " << cpassword << endl;
    file.close();
    cout << "Registration Successfully" << endl
         << endl;
}
int main()
{
    cout << "Login And Restration System" << endl;
    cout << "***************************" << endl;
    int choice;
    cout << "1.Login\n2.Registation\n3.Exit\n"
         << endl;
    do
    {
        cout << "Enter Your Choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nLogin Page\n";
            Login();
            break;
        case 2:
            cout << "\nResitration Page\n";
            Registration();
            break;
        case 3:
            cout << "\nExit From Application\n";
            exit(0);
            break;
        default:
            cout << "\nInvalid Choice\n";
        }
    } while (choice != 3);

    return 0;
}