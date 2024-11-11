#include <iostream>
using namespace std;
int main()
{
    int array[100], Num, *ptr;
    cout << "\nHow Many Element You Want To Input: " << endl;
    cin >> Num;
    for (int i = 0; i < Num; i++)
    {
        cout << "\nEnter " << (i + 1) << " Data: " << endl;
        cin >> array[i];
    }
    ptr = array;
    cout << "\nData Is :" << endl;
    for (int i = 0; i < Num; i++)
    {
        cout << *(ptr + i) << endl;
    }
    return 0;
}