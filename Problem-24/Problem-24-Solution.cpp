#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber(string Message)
{
    int Number;

    cout << Message << ": ";
    cin >> Number;

    return Number;
}

int ReadAge(int Min, int Max)
{
    string Message = "Please Enter Age Between [" + to_string(Min) + "] AND [" + to_string(Max) + "]";
    return ReadNumber(Message);
}

bool ValidateNumberInRange(int Number, int Min, int Max)
{
    return (Number >= Min && Number <= Max);
}

void PrintAgeResult(int Age)
{
    printf("%d Is a %s Age.", Age, (ValidateNumberInRange(Age, 18, 45) ? "Valid" : "Invalid"));
}

int main()
{
    PrintAgeResult(ReadAge(18, 45));
}