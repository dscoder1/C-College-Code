#include <iostream>
using namespace std;
class Marks
{
    int marks1, marks2, marks3;

public:
    void set_data();
    friend int avg();
};
void Marks::set_data()
{
    cout << "\nEnter Three Marks:" << endl;
    cin >> marks1 >> marks2 >> marks3;
}
/* void set_data();
 void avg();*/
// };
// void Marks::set_data()
// {
//     cout << "\nEnter Marks Of All Three Subject" << endl;
//     cin >> marks1 >> marks2 >> marks3;
// }
// void Marks::avg()
// {
//     float avg1;
//     int sum = 0;
//     sum = marks1 + marks2 + marks3;
//     avg1 = sum / 3.0;
//     cout << "\nAverage :" << avg1 << endl;
// // }
int avg()
{
    Marks m1;
    m1.set_data();
    float avg;
    int sum = 0;
    sum = m1.marks1 + m1.marks2 + m1.marks3;
    avg = sum / 3.0;
    return avg;
}
int main()
{

    int a = avg();

    return 0;
}