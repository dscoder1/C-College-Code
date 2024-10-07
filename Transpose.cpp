#include <iostream>
using namespace std;
class Matrix
{
    int arr[3][3], arr1[3][3];

public:
    void set_data();
    void print_data();
    void transpose_data();
    void print_data1();
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
}
void Matrix ::print_data()
{
    cout << "\nMatrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << "\t";
        }
        cout << endl;
    }
}

void Matrix ::print_data1()
{
    cout << "\nMatrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
void Matrix::transpose_data()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr1[j][i] = arr[i][j];
        }
    }
}
int main()
{
    Matrix m1;
    m1.set_data();
    m1.print_data1();
    m1.transpose_data();
    m1.print_data();
}