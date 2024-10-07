#include <iostream>
using namespace std;
int BinaryToDecimal()
{
    int bin, rem, dec = 0, base = 1;
    cout << "\nEnter A Binary Number:" << endl;
    cin >> bin;
    while (bin != 0)
    {
        rem = bin % 10;
        dec = dec + (rem * base);
        base = base * 2;
        bin = bin / 10;
    }
    cout << "Decimal:" << dec;
}
int DecimalToBinary()
{
    int dec, rem, bin = 0, base = 1;
    cout << "\nEnter A Decimal Number:" << endl;
    cin >> dec;
    while (dec != 0)
    {
        rem = dec % 2;
        bin = bin + (rem * base);
        base = base * 10;
        dec = dec / 2;
    }
    cout << "Binary: " << bin;
}
int DecimalToOctal()
{
    int dec, rem, oct = 0, base = 1;
    cout << "\nEnter A Decimal Number:" << endl;
    cin >> dec;
    while (dec != 0)
    {
        rem = dec % 8;
        oct = oct + (rem * base);
        base = base * 10;
        dec = dec / 8;
    }
    cout << "Octal: " << oct;
}
int OctalToDecimal()
{
    int oct, rem, dec = 0, base = 1;
    cout << "\nEnter A Octal Number:" << endl;
    cin >> oct;
    while (oct != 0)
    {
        rem = oct % 10;
        dec = dec + (rem * base);
        base = base * 8;
        oct = oct / 10;
    }
    cout << "Decimal: " << dec << endl;
}
int main()
{
    OctalToDecimal();
    return 0;
}