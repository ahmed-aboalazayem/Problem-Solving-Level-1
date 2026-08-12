#include <iostream>
#include <string>
using namespace std;


enum enPassFail { Fail = 0, Pass = 1 };

int ReadMark(short MarkNum)
{
    int Mark;

    cout << "Enter Mark #" << MarkNum << ": ";
    cin >> Mark;

    while(Mark < 0 || Mark > 100)
    {
        cout << "Invalid Mark, Please Try Again: ";
        cin >> Mark;
    }

    return Mark;
}

void ReadThreeMarks(int& Mark1, int& Mark2, int& Mark3)
{
    Mark1 = ReadMark(1);
    Mark2 = ReadMark(2);
    Mark3 = ReadMark(3);
}

int SumOfThreeMarks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float AverageOfThreeMarks(int Mark1, int Mark2, int Mark3)
{
    return ((float)SumOfThreeMarks(Mark1, Mark2, Mark3) / 3);
}

enPassFail CheckPassFail(float Avg)
{
    return Avg >= 50 ? enPassFail::Pass : enPassFail::Fail;
}

void PrintStudentResults(float Avg)
{
    printf("Your Average Is %.2f\n", Avg);
    cout << "You " << (CheckPassFail(Avg) ? "Pass" : "Fail") << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadThreeMarks(Mark1, Mark2, Mark3);
    PrintStudentResults(AverageOfThreeMarks(Mark1, Mark2, Mark3));
}