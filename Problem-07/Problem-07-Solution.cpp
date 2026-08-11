#include <iostream>
#include <string>
using namespace std;


int ReadNumber()
{
    int Number;

    cout << "Enter a Number: ";
    cin >> Number;

    return Number;
}

float CalculateHalfNumber(int Num)
{
    return (float)Num / 2;
}

void PrintHalfNumberResult(int Num)
{
    printf("Half Of %d Is: %.2f", Num, CalculateHalfNumber(Num));
}


int main()
{
    PrintHalfNumberResult(ReadNumber());
}