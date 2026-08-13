#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enEvenOdd { Odd = 1, Even = 2 };

int ReadNumber(string Message)
{
    int Number;

    cout << Message << ": ";
    cin >> Number;

    return Number;
}

int ReadPositiveNumber(string Message)
{
    int Num = ReadNumber(Message);

    while (Num <= 0)
    {
        cout << "Invalid Number, Please Enter Positive Number.!" << endl;
        Num = ReadNumber(Message);
    }

    return Num;
}

enEvenOdd CheckEvenOrOdd(int Number)
{
    return Number % 2 == 0 ? enEvenOdd::Even : enEvenOdd::Odd;
}

int SumOfOddNumbersFromOneToN(int N)
{
    int Sum = 0;

    for (int i = 1; i <= N; i++)
    {
        if (CheckEvenOrOdd(i) == enEvenOdd::Odd)
            Sum += i;
    }

    return Sum;
}

void PrintSumOfOddNumbersResults(int Num)
{
    printf("The Sum Of Odd Numbers From [1 To %d] Is %d.\n", Num, SumOfOddNumbersFromOneToN(Num));
}

void PrintDetailedResults(int Num)
{
    string str = "";

    for (int i = 1; i <= Num; i++)
    {
        if (!str.empty())
          str += " + ";

        str += to_string(i);
    }

    str += " = ";
    
    int Sum = SumOfOddNumbersFromOneToN(Num);
    str += to_string(Sum);

    printf("\nThe Sum Of Odd Numbers From [1 To %d] Is %d.\n", Num, Sum);
    cout << "\t" << str << endl;
}


int main()
{
    PrintDetailedResults(ReadPositiveNumber("Please Enter a Number"));
}