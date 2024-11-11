#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string Name;
    int Age;
};

int main()
{
    Student First;
    Student *Ptr;
    Ptr = &First;
    Ptr->Age = 20;
    Ptr->Name = "Divya Shakti";
    cout << "\nName Of This Student Is :" << Ptr->Name << endl;
    cout << "\nAge Of This Student Is :" << Ptr->Age << endl;
    return 0;
}