#include <iostream>
#include <string>
#include <fstream>
using namespace std;
fstream file;
fstream file1;
void Add()
{
    string List;
    cout << "Enter What You Want To Add" << endl;
    cin.ignore();
    getline(cin, List);
    file.open("List", ios::app | ios::ate);
    file << List << endl;
    file.close();
}
void Delete()
{
    string List, oList;
    cout << "Enter What You Want To Delete" << endl;
    cin.ignore();
    getline(cin, oList);
    file.open("List", ios::in);
    file1.open("List1", ios::out | ios::app);
    getline(file, List, '\n');
    while (!file.eof())
    {
        if (List == oList)
        {
            getline(file, List, '\n');
        }
        else
        {
            file1 << List << endl;
            getline(file, List, '\n');
        }
    }

    file.close();
    file1.close();
    remove("List");
    rename("List1", "List");
}
void Update()
{
    string List, oList;
    cout << "Enter What You Want To Update" << endl;
    cin.ignore();
    getline(cin, oList);
    file.open("List", ios::in);
    file1.open("List1", ios::out | ios::app);
    getline(file, List, '\n');
    while (!file.eof())
    {
        if (List == oList)
        {
            cout << "New List :" << endl;
            getline(cin, oList);
            file1 << oList << endl;
        }
        else
        {
            file1 << List << endl;
            getline(file, List, '\n');
        }
    }

    file.close();
    file1.close();
    remove("List");
    rename("List1", "List");
}
void Display()
{
    cout << "Your List Are:" << endl;
    file.open("List", ios::in);
    string List;
    getline(file, List, '\n');
    while (!file.eof())
    {
        cout << List << endl;
        getline(file, List, '\n');
    }
    file.close();
}
int main()
{
    cout << "\n1.Add Work\n2.Update Your Work\n3.Delete Your Work\n4.Display List\n5.Exit\n";
    int choice;
    do
    {
        cout << "\nEnter Your Choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Add();
            break;
        case 2:
            Update();
            break;
        case 3:
            Delete();
            break;
        case 4:
            Display();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid Choice";
        }
    } while (choice != 5);
    return 0;
}