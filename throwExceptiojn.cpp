#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter Two Number" << endl;
    cin >> num1 >> num2;
    try
    {

        if (num2 == 0)
        {
            throw runtime_error("Not Divided By Zero");
        }
        else
        {

            cout << "Result Is " << (num1 / num2) << endl;
        }
    }
    catch (const exception &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}