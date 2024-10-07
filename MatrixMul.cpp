#include <iostream>
using namespace std;
class Matrix
{
    int arr[3][3], arr1[3][3], arr2[3][3];

public:
    void set_data();
    void print_data();
    void mul_data();
};
void Matrix ::set_data()
{
    cout << "\nEnter Matrix1:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nEnter Matrix2:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "\nMatrix 3:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr2[i][j] = 0;
        }
    }
}
void Matrix ::print_data()
{
    cout << "\nMatrix:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr2[i][j] << "\t";
        }
        cout << endl;
    }
}
void Matrix::mul_data()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                arr2[i][j] = arr2[i][j] + arr[i][k] * arr1[k][j];
            }
        }
    }
}
int main()
{
    Matrix m1;
    m1.set_data();
    m1.mul_data();
    m1.print_data();
}