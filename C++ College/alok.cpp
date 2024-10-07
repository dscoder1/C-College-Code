#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x[] = {54, 85, 64, 32};
    int n, mean, total = 0;
    n = sizeof(x) / sizeof(x[0]);
    int y[n];
    int z[n];
    for (int i = 0; i < n; i++)
    {
        total += x[i];
        /* code */
        mean = total / n;
    }
    // cout << mean<<endl;
    // find standard daviation
    for (int i = 0; i < n; i++)
    {
        y[i] = x[i] - mean;
        // cout << y[i]<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        z[i] = pow(y[i], 2);
        cout << z[i] << endl;
    }

    return 0;
}
