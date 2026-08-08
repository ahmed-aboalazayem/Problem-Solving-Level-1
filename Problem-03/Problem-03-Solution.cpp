#include <iostream>
#include <string>
using namespace std;

enum enEvenOdd {Odd = 1, Even = 2};

int ReadNumber()
{
    int Number;
    cin >> Number;
    return Number;
}

enEvenOdd CheckEvenOrOdd(int Number)
{
    return Number % 2 == 0 ? enEvenOdd::Even : enEvenOdd::Odd;
}

void PrintEvenOrOdd(enEvenOdd NumberType)
{
    if (NumberType == enEvenOdd::Even)
        cout << "The Number Is EVEN.";
    else
        cout << "The Number Is ODD.";
}


int main()
{
    cout << "Please Enter a Number: ";
    PrintEvenOrOdd(CheckEvenOrOdd(ReadNumber()));
}