#include <iostream>
#include <string>
#include <fstream>
using namespace std;
fstream file;
fstream file1;
int i = 0;
string Id, Contact_No, Name;
void Add()
{
    cout << "Enter Id Of Pateint:";
    cin.ignore();
    getline(cin, Id);
    cout << "Enter Name Of Pateint:";
    getline(cin, Name);
    cout << "Enter Contact Number Of Pateint:";
    getline(cin, Contact_No);
    file.open("HMS", ios::out | ios::app | ios::ate);
    file << Id << "*" << Name << "*" << Contact_No << endl;
    file.close();
}
void Display()
{
    cout << "Display All Pateint Details:" << endl;
    cout << "****************************" << endl;
    file.open("HMS", ios::in);
    getline(file, Id, '*');
    getline(file, Name, '*');
    getline(file, Contact_No, '\n');
    while (!file.eof())
    {
        cout << "Pateint details : " << i + 1 << endl;
        cout << "Pateint Id: " << Id << endl;
        cout << "Pateint Name: " << Name << endl;
        cout << "Pateint Contact Number: " << Contact_No << endl;
        cout << "****************************" << endl;
        getline(file, Id, '*');
        getline(file, Name, '*');
        getline(file, Contact_No, '\n');
    }
    file.close();
}
void Delete()
{
    string Delid;
    cout << "Enter Id Of Pateint You Want To Delete:";
    cin.ignore();
    cin >> Delid;
    file.open("HMS", ios::in);
    file1.open("HMS1", ios::out | ios::app);
    getline(file, Id, '*');
    getline(file, Name, '*');
    getline(file, Contact_No, '\n');
    while (!file.eof())
    {
        if (Id == Delid)
        {
            getline(file, Id, '*');
            getline(file, Name, '*');
            getline(file, Contact_No, '\n');
        }
        else
        {
            file1 << Id << "*" << Name << "*" << Contact_No << endl;
            getline(file, Id, '*');
            getline(file, Name, '*');
            getline(file, Contact_No, '\n');
        }
    }
    file.close();
    file1.close();
    remove("HMS");
    rename("HMS1", "HMS");
}
void Update()
{
    string UPtid;
    string newName, newId, newC;
    cout << "Enter Id Of Pateint You Want To Update:";
    cin.ignore();
    cin >> UPtid;
    file.open("HMS", ios::in);
    file1.open("HMS1", ios::out | ios::app);
    getline(file, Id, '*');
    getline(file, Name, '*');
    getline(file, Contact_No, '\n');
    while (!file.eof())
    {
        if (Id == UPtid)
        {
            cout << "Enter New Id Of Pateint:";
            cin.ignore();
            getline(cin, newId);
            cout << "Enter New Name Of Pateint:";
            getline(cin, newName);
            cout << "Enter New Contact Number Of Pateint:";
            getline(cin, newC);
            file1 << Id << "*" << Name << "*" << Contact_No << endl;
        }
        else
        {
            file1 << Id << "*" << Name << "*" << Contact_No << endl;
            getline(file, Id, '*');
            getline(file, Name, '*');
            getline(file, Contact_No, '\n');
        }
    }
    file.close();
    file1.close();
    remove("HMS");
    rename("HMS1", "HMS");
}
int main()
{
    cout << "Hospital Managment System" << endl;
    cout << "-------------------------" << endl;
    cout << "1.Add Pateint\n2.See Details Of All Pateint\n3.Update Pateint Details\n4.Delete Pateint Details\n5.Exit\n";
    int choice;
    do
    {
        cout << "Enter Your Choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Add();
            break;
        case 2:
            Display();
            break;
        case 3:
            Update();
            break;
        case 4:
            Delete();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid Choice:" << endl;
        }
    } while (choice != 5);
    return 0;
}