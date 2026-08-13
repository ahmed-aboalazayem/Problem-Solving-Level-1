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

int ReadAgeUntilAgeBetween(int Min, int Max)
{
    int Age = ReadAge(Min, Max);

    while (!ValidateNumberInRange(Age, Min, Max))
    {
        cout << "Invalid Age :-(" << endl;
        Age = ReadAge(Min, Max);
    }

    return Age;
}

void PrintAgeResult(int Age)
{
    printf("The Age Is %d\n", Age);
}

int main()
{
    PrintAgeResult(ReadAgeUntilAgeBetween(18, 45));
}