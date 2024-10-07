#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void admin();
void user();
void add();
void del();
void display();
void update();
fstream file, file1;
string Id, Name, Roll;
int main()
{
    int choice;
    cout << "Student Managment System" << endl;
    cout << "************************" << endl;
    cout << "\n1.Administrator\n2.User\n3.Exit From Application" << endl;
    do
    {
        cout << "\nEnter Your Choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            admin();
            break;
        case 2:
            user();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Invalid Option" << endl;
        }
    } while (choice != 3);
}
void add()
{
    char ch;
    cout << "You Want To Add Some New Student(y/n)" << endl;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        cout << "Enter Id :" << endl;
        cin.ignore();
        getline(cin, Id);
        cout << "Enter Name:" << endl;
        getline(cin, Name);
        cout << "Enter Roll:" << endl;
        getline(cin, Roll);
        file.open("Attendence", ios::out | ios::app);
        file << Id << "-" << Name << "-" << Roll << endl;
        file.close();
    }
    else
    {
        admin();
    }
}
void update()
{
    char ch;
    cout << "You Want To Update Student Details(y/n)" << endl;
    cin >> ch;
    string FRoll, NewId, NewName, NewRoll;
    cout << "Enter Roll Number You Want To Update:" << endl;
    cin.ignore();
    cin >> FRoll;
    file.open("Attendence", ios::in);
    file1.open("Attendence1", ios::out | ios::app);
    if (ch == 'y' || ch == 'Y')
    {

        getline(file, Id, '-');
        getline(file, Name, '-');
        getline(file, Roll, '\n');
        while (!file.eof())
        {
            if (Id == FRoll)
            {
                cout << "Enter New Id :" << endl;
                cin.ignore();
                getline(cin, NewId);
                cout << "Enter New Name:" << endl;
                getline(cin, NewName);
                cout << "Enter New Roll:" << endl;
                getline(cin, NewRoll);
                file1 << NewId << "-" << NewName << "-" << NewRoll << endl;
                cout << "Updated Successfully" << endl
                     << endl;
                getline(file, Id, '-');
                getline(file, Name, '-');
                getline(file, Roll, '\n');
            }
            else
            {
                file1 << Id << "-" << Name << "-" << Roll << endl;
                getline(file, Id, '-');
                getline(file, Name, '-');
                getline(file, Roll, '\n');
            }
        }
        file.close();
        file1.close();
        remove("Attendence");
        rename("Attendence1", "Attendence");
    }
    else
    {
        admin();
    }
}
void del()
{
    char ch;
    cout << "You Want To Delete Student Details(y/n)" << endl;
    cin >> ch;
    string FRoll;
    cout << "Enter Id You Want To Delete:" << endl;
    cin.ignore();
    cin >> FRoll;
    file.open("Attendence", ios::in);
    file1.open("Attendence1", ios::out | ios::app);
    if (ch == 'y' || ch == 'Y')
    {

        getline(file, Id, '-');
        getline(file, Name, '-');
        getline(file, Roll, '\n');
        while (!file.eof())
        {
            if (Id == FRoll)
            {
                cout << "Deleted Successfully" << endl
                     << endl;
                getline(file, Id, '-');
                getline(file, Name, '-');
                getline(file, Roll, '\n');
            }
            else
            {
                file1 << Id << "-" << Name << "-" << Roll << endl;
                getline(file, Id, '-');
                getline(file, Name, '-');
                getline(file, Roll, '\n');
            }
        }
        file.close();
        file1.close();
        remove("Attendence");
        rename("Attendence1", "Attendence");
    }
    else
    {
        admin();
    }
}
void display()
{
    cout << "Student Details" << endl
         << endl;
    file.open("Attendence", ios::app | ios::in);
    getline(file, Id, '-');
    getline(file, Name, '-');
    getline(file, Roll, '\n');
    while (!file.eof())
    {
        cout << "Student Id: " << Id << endl;
        cout << "Student Name: " << Name << endl;
        cout << "Student Roll: " << Roll << endl;
        getline(file, Id, '-');
        getline(file, Name, '-');
        getline(file, Roll, '\n');
    }
    file.close();
}
void user()
{
    int choice;
    cout << "\nEntered Into User Block" << endl
         << endl;
    cout << "\n1.Your Details\n2.Exit From User Block\n";
    do
    {
        cout << "Enter Your Choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            display();
            break;
        case 2:
            main();
            break;
        default:
            cout << "Invalid Choice In User Block" << endl;
        }
    } while (choice != 2);
}
void admin()
{
    string email;
    int pass;
    cout << "Enter Email:" << endl;
    cin >> email;
    cout << "Enter Password:" << endl;
    cin >> pass;
    int choice;
    if (email == "ds@gmail.com" && pass == 12345)
    {
        cout << "Matched Successfully" << endl
             << endl;
        cout << "Entered Into Administrator Block" << endl
             << endl;
        cout << "\n1.Add Student\n2.Remove Student\n3.Update Details\n4.Exit From Administrator Block\n";
        do
        {
            cout << "Enter Your Choice:" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                add();
                break;
            case 2:
                del();
                break;
            case 3:
                update();
                break;
            case 4:
                main();
                break;
            default:
                cout << "Invalid Choice In Administrator Block" << endl
                     << endl;
            }
        } while (choice != 4);
    }
    else
    {
        cout << "Unmatched" << endl
             << endl;
        cout << "Try Again!!" << endl
             << endl;
        admin();
    }
}