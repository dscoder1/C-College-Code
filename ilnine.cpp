#include <iostream>
using namespace std;
inline int sqr(int num)
{
    return num * num;
}
inline int three(int num1)
{
    return num1 * num1 * num1;
}
int main()
{
    cout << "Square : " << sqr(5);
    cout << "\nSquare : " << three(5);
    return 0;
}