#include <iostream>
#include <string>
#include <fstream>
using namespace std;
fstream file, file1;
class Student
{
    string Id, Roll, FirstName, LastName, Course, CollegeName, NewId, NewRoll, NewFirstName, NewLastName, NewCourse;

public:
    void AddStudent();
    void DisplayStudent();
    void Delete();
    void Update();
    void Find();
} student;
void Student::AddStudent()
{
    file.open("StudentDetailsFile", ios::app | ios::out);
    student.CollegeName = "LNMI Patna";
    cout << "\nEnter Student Id:" << endl;
    cin.ignore();
    getline(cin, student.Id);
    cout << "\nEnter Student Roll Number:" << endl;
    getline(cin, student.Roll);
    cout << "\nEnter Student First Name:" << endl;
    getline(cin, student.FirstName);
    cout << "\nEnter Student Last Name:" << endl;
    getline(cin, student.LastName);
    cout << "\nEnter Student Course:" << endl;
    getline(cin, student.Course);
    file << student.CollegeName << "*" << student.Id << "*" << student.Roll << "*" << student.FirstName << "*" << student.LastName << "*" << student.Course << "\n";
    file.close();
}
void Student::DisplayStudent()
{
    file.open("StudentDetailsFile", ios::in);
    int i = 0;
    getline(file, student.CollegeName, '*');
    getline(file, student.Id, '*');
    getline(file, student.Roll, '*');
    getline(file, student.FirstName, '*');
    getline(file, student.LastName, '*');
    getline(file, student.Course, '\n');
    while (!file.eof())
    {
        cout << "Student" << i + 1 << endl;
        cout << "\nStudent College Name:" << student.CollegeName << endl;
        cout << "\nStudent Id:" << student.Id << endl;
        cout << "\nStudent Roll Number:" << student.Roll << endl;
        cout << "\nStudent First Name:" << student.FirstName << endl;
        cout << "\nStudent Last Name:" << student.LastName << endl;
        cout << "\nStudent Course Name:" << student.Course << endl;
        getline(file, student.CollegeName, '*');
        getline(file, student.Id, '*');
        getline(file, student.Roll, '*');
        getline(file, student.FirstName, '*');
        getline(file, student.LastName, '*');
        getline(file, student.Course, '\n');
        i++;
    }
}
void Student::Delete()
{
    string stdId;
    cout << "\nEnter Student's Id:" << endl;
    cin.ignore();
    getline(cin, stdId);
    file.open("StudentDetailsFile", ios::in);
    file1.open("StudentDetailsFile1", ios::out | ios::app);
    getline(file, student.CollegeName, '*');
    getline(file, student.Id, '*');
    getline(file, student.Roll, '*');
    getline(file, student.FirstName, '*');
    getline(file, student.LastName, '*');
    getline(file, student.Course, '\n');
    while (!file.eof())
    {
        if (stdId == student.Id)
        {
            cout << "Student Details Matched And Deleted" << endl;
        }
        else
        {
            file1 << student.CollegeName << "*" << student.Id << "*" << student.Roll << "*" << student.FirstName << "*" << student.LastName << "*" << student.Course << "\n";
        }
        getline(file, student.CollegeName, '*');
        getline(file, student.Id, '*');
        getline(file, student.Roll, '*');
        getline(file, student.FirstName, '*');
        getline(file, student.LastName, '*');
        getline(file, student.Course, '\n');
    }
    file.close();
    file1.close();
    remove("StudentDetailsFile");
    rename("StudentDetailsFile1", "StudentDetailsFile");
}
void Student::Update()
{
    string stdId;
    cout << "\nEnter Student's Id You Want To Update:" << endl;
    cin.ignore();
    getline(cin, stdId);
    file.open("StudentDetailsFile", ios::in);
    file1.open("StudentDetailsFile1", ios::out | ios::app);
    getline(file, student.CollegeName, '*');
    getline(file, student.Id, '*');
    getline(file, student.Roll, '*');
    getline(file, student.FirstName, '*');
    getline(file, student.LastName, '*');
    getline(file, student.Course, '\n');
    while (!file.eof())
    {
        if (stdId == student.Id)
        {
            cout << "\nGive New Details Of This Student" << endl;
            student.CollegeName = "LNMI Patna";
            cout << "\nEnter Student New Id:" << endl;
            cin.ignore();
            getline(cin, student.NewId);
            cout << "\nEnter Student New Roll Number:" << endl;
            getline(cin, student.NewRoll);
            cout << "\nEnter Student First Name:" << endl;
            getline(cin, student.NewFirstName);
            cout << "\nEnter Student Last Name:" << endl;
            getline(cin, student.NewLastName);
            cout << "\nEnter Student Course:" << endl;
            getline(cin, student.NewCourse);
            file1 << student.CollegeName << "*" << student.NewId << "*" << student.NewRoll << "*" << student.NewFirstName << "*" << student.NewLastName << "*" << student.NewCourse << "\n";
            cout << "Student Details Matched And Updated" << endl;
        }
        else
        {
            file1 << student.CollegeName << "*" << student.Id << "*" << student.Roll << "*" << student.FirstName << "*" << student.LastName << "*" << student.Course << "\n";
        }
        getline(file, student.CollegeName, '*');
        getline(file, student.Id, '*');
        getline(file, student.Roll, '*');
        getline(file, student.FirstName, '*');
        getline(file, student.LastName, '*');
        getline(file, student.Course, '\n');
    }
    file.close();
    file1.close();
    remove("StudentDetailsFile");
    rename("StudentDetailsFile1", "StudentDetailsFile");
}
void Student::Find()
{
    string SearchId;
    cout << "\nEnter Student Id You Want To Find:" << endl;
    cin.ignore();
    getline(cin, SearchId);
    file.open("StudentDetailsFile", ios::in);
    getline(file, student.CollegeName, '*');
    getline(file, student.Id, '*');
    getline(file, student.Roll, '*');
    getline(file, student.FirstName, '*');
    getline(file, student.LastName, '*');
    getline(file, student.Course, '\n');
    while (!file.eof())
    {
        if (SearchId == student.Id)
        {
            cout << "\nStudent College Name:" << student.CollegeName << endl;
            cout << "\nStudent Id:" << student.Id << endl;
            cout << "\nStudent Roll Number:" << student.Roll << endl;
            cout << "\nStudent First Name:" << student.FirstName << endl;
            cout << "\nStudent Last Name:" << student.LastName << endl;
            cout << "\nStudent Course Name:" << student.Course << endl;
            return;
        }
        getline(file, student.CollegeName, '*');
        getline(file, student.Id, '*');
        getline(file, student.Roll, '*');
        getline(file, student.FirstName, '*');
        getline(file, student.LastName, '*');
        getline(file, student.Course, '\n');
    }
    cout << "\nDetails Not Found" << endl;
}
int main()
{
    int Choice;
    cout << "\nSTUDENT MANAGMENT SYSTEM" << endl
         << endl;
    cout << "\n1.Add Student\n2.Display Student\n3.Delete Student By Id\n4.Update Student By Id\n5.Search Student By Id\n6.Exit\n"
         << endl;
    do
    {
        cout << "\nEnter Your Choice:" << endl;
        cin >> Choice;
        switch (Choice)
        {
        case 1:
            student.AddStudent();
            break;
        case 2:
            student.DisplayStudent();
            break;
        case 3:
            student.Delete();
            break;
        case 4:
            student.Update();
            break;
        case 5:
            student.Find();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "\nInvalid Choice" << endl;
        }
    } while (Choice != 6);
    return 0;
}