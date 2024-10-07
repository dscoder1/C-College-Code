#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void Mean()
{
    int data[50], freq[50], DataFreq[50], TotalData, TotalFreq;
    float MeanVal, sumDataFreq = 0.0, sumFreq = 0.0, sumData = 0.0;
    string Choice;
    cout << "\nEnter Your Choice:(Only Data Field/Data With Frequency Field)" << endl;
    cin.ignore();
    getline(cin, Choice);
    if (Choice == "Only Data Field")
    {
        cout << "\nEnter Total Number Of Data:" << endl;
        cin >> TotalData;
        cout << "\nEnter Total Number Of Frequency:" << endl;
        cin >> TotalFreq;
        for (int i = 0; i < TotalData; i++)
        {
            cout << "\nGive Data:" << i + 1 << endl;
            cin >> data[i];
        }
        for (int i = 0; i < TotalData; i++)
        {
            sumData += data[i];
        }
        MeanVal = sumData / TotalData;
        cout << "\nMean Is: " << MeanVal << endl;
    }
    else if (Choice == "Data With Frequency Field")
    {
        cout << "\nEnter Total Number Of Data:" << endl;
        cin >> TotalData;
        cout << "\nEnter Total Number Of Frequency:" << endl;
        cin >> TotalFreq;
        for (int i = 0; i < TotalData; i++)
        {
            cout << "\nGive Data:" << i + 1 << endl;
            cin >> data[i];
        }

        for (int i = 0; i < TotalFreq; i++)
        {
            cout << "\nGive Frequency:" << i + 1 << endl;
            cin >> freq[i];
        }

        for (int i = 0; i < TotalData; i++)
        {
            DataFreq[i] = data[i] * freq[i];
        }
        for (int i = 0; i < TotalData; i++)
        {
            sumDataFreq += DataFreq[i];
        }
        for (int i = 0; i < TotalData; i++)
        {
            sumFreq += freq[i];
        }
        MeanVal = sumDataFreq / sumFreq;
        cout << "\nMean Is: " << MeanVal << endl;
    }
    else
    {
        cout << "Invalid Choice Try Again" << endl;
        Mean();
    }
}

void Median()
{
    int TotalData, LowerData, UpperData, FreqData, length, MedianVal, sum, index;
    vector<int> Details;
    vector<int> Lower;
    vector<int> Upper;
    vector<int> Freq;
    vector<int> CF;
    /*cout << "\nEnter Total Number Of Data:" << endl;
    cin >> TotalData;
    for (int i = 0; i < TotalData; i++)
    {
        cin >> Data;
        Details.push_back(Data);
    }
    sort(Details.begin(), Details.end());
    length = Details.size();
    if (length % 2 == 0)
    {
        MedianVal = (Details[(length / 2) - 1] + Details[(length / 2) + 1] - 1) / 2;
    }
    else
    {
        MedianVal = Details[((length + 1) / 2) - 1];
    }
    cout << "Median Is :" << MedianVal << endl;*/
    cout << "\nEnter Total Number Of Data:" << endl;
    cin >> TotalData;
    for (int i = 0; i < TotalData; i++)
    {
        cout << "Give Lower Limit" << endl;
        cin >> LowerData;
        cout << "Give Upper Limit" << endl;
        cin >> UpperData;
        cout << "Give Its Frequency" << endl;
        cin >> FreqData;
        Lower.push_back(LowerData);
        Upper.push_back(UpperData);
        Freq.push_back(FreqData);
    }
    sum = Freq[0];
    for (int i = 0; i < TotalData; i++)
    {
        CF.push_back(sum);
        sum += Freq[i + 1];
    }
    for (int i = 0; i < TotalData; i++)
    {
        cout << endl
             << "CF Column Is :" << endl;
        cout << CF[i] << endl;
    }
    float n = CF[TotalData - 1] / 2;
    cout << "N/2 Of Given Data Is :" << n << endl;
    for (int i = 0; i < TotalData; i++)
    {
        if (CF[i] < n && CF[i + 1] > n)
        {
            index = i + 1;
            break;
        }
    }
    cout << "Median Block Is At :" << index << endl;
    int cummu = CF[index - 1];
    int f = Freq[index];
    int lwr = Lower[index];
    cout << "In This Data " << endl;
    cout << "Lower Limit Is :" << lwr << endl;
    cout << "Frequency Is :" << f << endl;
    cout << "Cummulative Frequency  Is :" << cummu << endl;
    float median = lwr + (n - cummu) / f * 10;
    cout << endl
         << "Median Of This Data Is :" << median << endl;
}
void Mode()
{
    int TotalData, LowerData, UpperData, FreqData, maxFre, index, lowerVal, f0, f1, f2, i;
    float Mode;
    vector<int> Lower;
    vector<int> Upper;
    vector<int> Freq;
    cout << "\nEnter Total Number Of Data:" << endl;
    cin >> TotalData;
    for (int i = 0; i < TotalData; i++)
    {
        cout << "Give Lower Limit" << endl;
        cin >> LowerData;
        cout << "Give Upper Limit" << endl;
        cin >> UpperData;
        cout << "Give Its Frequency" << endl;
        cin >> FreqData;
        Lower.push_back(LowerData);
        Upper.push_back(UpperData);
        Freq.push_back(FreqData);
    }
    maxFre = Freq[0];
    for (int i = 1; i < TotalData; i++)
    {
        if (maxFre < Freq[i])
        {
            maxFre = Freq[i];
            index = i;
        }
    }
    cout << "\nMax Frequency Is : " << maxFre << "And Index Is :" << index << endl;
    lowerVal = Lower[index];
    f0 = Freq[index];
    f1 = Freq[index - 1];
    f2 = Freq[index + 1];
    cout << "\nLower Value Is : " << lowerVal << endl;
    cout << "\nF0 Value Is : " << f0 << endl;
    cout << "\nF1 Value Is : " << f1 << endl;
    cout << "\nF2 Value Is : " << f2 << endl;
    float f0_f1 = f0 - f1;
    float _2f0 = 2 * f0;
    float _2f0_f1_f2 = _2f0 - f1 - f2;
    float divVal = f0_f1 / _2f0_f1_f2;
    Mode = lowerVal + divVal * 10;
    cout << "\nMode Of This Question Is :" << Mode << endl;
}
int main()
{
    int choice;
    cout << "STATISTICAL METHOD" << endl;
    cout << "1.Mean\n2.Median\n3.Mode\n4.Exit" << endl;
    cout << "\nEnter Your Choice:" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        Mean();
        break;
    case 2:
        Median();
        break;
    case 3:
        Mode();
        break;
    case 4:
        exit(0);
        break;
    default:
        cout << "\nInvalid Choice" << endl;
    }
    return 0;
}