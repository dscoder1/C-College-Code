#include <iostream>
using namespace std;
class Bank
{
protected:
    int Ac_No;

public:
    virtual void roi() = 0;
};
class derived : public Bank
{
public:
    void roi()
    {
        Ac_No = 89;
        cout << Ac_No;
    }
};
int main()
{
    derived d1;
    d1.roi();

    return 0;
}