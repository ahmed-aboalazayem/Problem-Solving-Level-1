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

void PrintNumbersFromOneToN(int N)
{
    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    PrintNumbersFromOneToN(ReadNumber("Please Enter a Number"));
}