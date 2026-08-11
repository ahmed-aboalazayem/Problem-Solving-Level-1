#include <iostream>
#include <string>
using namespace std;


enum enPassFail {Fail = 0, Pass = 1};

int ReadMark()
{
    int Mark;

    cout << "Enter Your Mark: ";
    cin >> Mark;
    
    while (Mark < 0 || Mark > 100)
    {
        cout << "Invalid Mark, Please Try Again: ";
        cin >> Mark;
    }

    return Mark;
}

enPassFail CheckMark(int Mark)
{
    return (Mark >= 50 ? enPassFail::Pass : enPassFail::Fail);
}

void PrintResult(int Mark)
{
    cout << "You " << (CheckMark(Mark) == enPassFail::Pass ? "Passed." : "Failed.");
}



int main()
{
    PrintResult(ReadMark());
}