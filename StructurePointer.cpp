#include <iostream>
using namespace std;
struct Number
{
    int Val1 = 5;
};
struct Number1
{
    int Val2 = 10;
};
void swaping(int *a, int *b)
{
    cout << *a << " " << *b << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << *a << " " << *b << endl;
}
int main()
{
    struct Number Num1;
    struct Number1 Num2;
    cout << Num1.Val1 << " " << Num2.Val2 << endl;
    int *ptr1, *ptr2;
    ptr1 = &Num1.Val1;
    ptr2 = &Num2.Val2;
    swaping(ptr1, ptr2);
    cout << Num1.Val1 << " " << Num2.Val2 << endl;
    return 0;
}