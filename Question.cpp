#include <iostream>
#include <string>
using namespace std;
static int Correct = 0;
class Questions
{
    string Question;
    string Option[4];
    int AnsIndex;

public:
    void SetQues();
    void Display();
} Ques[4];
void Questions ::SetQues()
{

    Ques[0].Question = "Q1.C++ Is Which Type Of Language";
    Ques[0].Option[0] = "1.Procedural Programming Language";
    Ques[0].Option[1] = "2.Object Oriented Programming Language";
    Ques[0].Option[2] = "3.Both Type Of Programming Language";
    Ques[0].Option[3] = "4.None Of These";
    Ques[0].AnsIndex = 1;
    Ques[1].Question = "Q2.C Is Which Type Of Language";
    Ques[1].Option[0] = "1.Procedural Programming Language";
    Ques[1].Option[1] = "2.Object Oriented Programming Language";
    Ques[1].Option[2] = "3.Both Type Of Programming Language";
    Ques[1].Option[3] = "4.None Of These";
    Ques[1].AnsIndex = 0;

    Ques[2].Question = "Q3.Java Is Which Type Of Language";
    Ques[2].Option[0] = "1.Procedural Programming Language";
    Ques[2].Option[1] = "2.Object Oriented Programming Language";
    Ques[2].Option[2] = "3.Both Type Of Programming Language";
    Ques[2].Option[3] = "4.None Of These";
    Ques[2].AnsIndex = 1;

    Ques[3].Question = "Q4.Python Is Which Type Of Language";
    Ques[3].Option[0] = "1.Procedural Programming Language";
    Ques[3].Option[1] = "2.Object Oriented Programming Language";
    Ques[3].Option[2] = "3.Both Type Of Programming Language";
    Ques[3].Option[3] = "4.None Of These";
    Ques[3].AnsIndex = 2;
}
void Questions ::Display()
{

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << endl
    //          << Ques[i].Question << endl;
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << Ques[i].Option[j] << endl;
    //     }
    // }
    int i = 0, ansindex;
    do
    {
        cout << Ques[i].Question << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << Ques[i].Option[j] << endl;
        }
        cout << "Enter Your Answer:" << endl;
        cin >> ansindex;
        if (ansindex - 1 == Ques[i].AnsIndex)
        {
            cout << "Answer Correct" << endl;
            Correct++;
        }
        else
            cout << "Incorrect Answer" << endl;

        i++;
    } while (i < 4);
    cout << "Number Of Correct Answer" << Correct << endl;
}
int main()
{
    Questions Dis;
    Dis.SetQues();
    Dis.Display();

    return 0;
}