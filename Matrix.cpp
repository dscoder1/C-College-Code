#include <iostream>
using namespace std;
class Matrix
{
    int arr[3][3], arr1[3][3], arr2[3][3];

public:
    void set_data();
    void print_data();
    void add_data();
};
void Matrix ::set_data()
{
    cout << "\nEnter Matrix1:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nEnter Matrix2:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }
}
void Matrix ::print_data()
{
    cout << "\nMatrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }
}
void Matrix::add_data()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j] = arr[i][j] + arr1[i][j];
        }
    }
}
int main()
{
    Matrix m1;
    m1.set_data();
    m1.add_data();
    m1.print_data();
}