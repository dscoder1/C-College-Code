#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(9);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(1);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }

    return 0;
}