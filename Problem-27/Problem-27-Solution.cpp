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

void PrintNumbersFromNToOne(int N)
{
    for (int i = N; i >= 1; i--)
    {
        cout << i << endl;
    }
}


int main()
{
    PrintNumbersFromNToOne(ReadNumber("Please Enter a Number"));
}