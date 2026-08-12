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

void ReadThreeNumbers(int& Num1, int& Num2, int& Num3)
{
    Num1 = ReadNumber("Enter The First Number");
    Num2 = ReadNumber("Enter The Second Number");
    Num3 = ReadNumber("Enter The Third Number");
}

int MaxOfThreeNumbers(int Num1, int Num2, int Num3)
{
    return Num1 > Num2 ? (Num1 > Num3 ? Num1 : Num3) : (Num2 > Num3 ? Num2 : Num3);
}

void PrintResults(int Max)
{
    printf("The Max Number Is: %d\n", Max);
}


int main()
{
    int Num1, Num2, Num3;
    ReadThreeNumbers(Num1, Num2, Num3);
    PrintResults(MaxOfThreeNumbers(Num1, Num2, Num3));
}