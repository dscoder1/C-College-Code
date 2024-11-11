#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, *SinglePtr, **DoublePtr;
    SinglePtr = &arr[0];
    DoublePtr = &SinglePtr;
    cout << SinglePtr << endl;
    cout << &arr[0] << endl;
    cout << *(SinglePtr + 1) << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "\nElement " << i + 1 << " Is : " << *(SinglePtr + i);
    }
    return 0;
}