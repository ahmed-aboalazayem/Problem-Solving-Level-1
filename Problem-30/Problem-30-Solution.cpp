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

int ReadNonNegativeNumber(string Message)
{
    int Num = ReadNumber(Message);

    while (Num < 0)
    {
        cout << "Invalid Number, Please Enter Positive Number.!" << endl;
        Num = ReadNumber(Message);
    }

    return Num;
}

// Simple Solution Using For Loop...
int CalculateFactorial_UsingForLoop(int Num)
{
    int FacResult = 1;

    for (int i = Num; i >= 1; i--)
    {
        FacResult *= i;
    }

    return FacResult;
}

// Advanced Solution Using Recursion...
int CalculateFactorial_UsingRecursion(int Num)
{
    if (Num == 0)
        return 1;

    return Num * CalculateFactorial_UsingRecursion(Num - 1);
}

void PrintFactorialResults(int Num, int FacResult)
{
    printf("The Factorial Of %d Is %d", Num, FacResult);
}


int main()
{
  int Num = ReadNonNegativeNumber("Please Enter a Number");

  PrintFactorialResults(Num, CalculateFactorial_UsingForLoop(Num));
  
  PrintFactorialResults(Num, CalculateFactorial_UsingRecursion(Num));
}