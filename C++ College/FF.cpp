#include <iostream>
using namespace std;
class Student
{
private:
    int id;
    int roll;
    string name;

public:
    friend void Set(Student &s, int rol);
    friend void Display(Student &s, int rol);
};
void Set(Student &s, int rol)
{
    s.name = "Raza";
    s.roll = rol;
}
void Display(Student &s, int rol)
{
    cout << s.name << endl;
    cout << s.roll << endl;
}
int main()
{
    Student s1;
    Set(s1, 5);
    Display(s1, 5);
    return 0;
}