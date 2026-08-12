#include <iostream>
#include <string>
using namespace std;


int ReadNumber(string Message)
{
    int Number;

    cout << Message << ": ";
    cin >> Number;

    return Number;
}

void ReadTwoNumbers(int& Num1, int& Num2)
{
    Num1 = ReadNumber("Enter The First Number");
    Num2 = ReadNumber("Enter The Second Number");
}

int MaxOfTwoNumbers(int Num1, int Num2)
{
    return Num1 > Num2 ? Num1 : Num2;
}

void PrintResults(int Max)
{
    printf("The Max Number Is: %d\n", Max);
}


int main()
{
    int Num1, Num2;
    ReadTwoNumbers(Num1, Num2);
    PrintResults(MaxOfTwoNumbers(Num1, Num2));
}