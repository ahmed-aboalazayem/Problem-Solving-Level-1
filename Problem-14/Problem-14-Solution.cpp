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
    Num1 = ReadNumber("Enter First  Number");
    Num2 = ReadNumber("Enter Second Number");
}

void Swap(int& Num1, int& Num2)
{
    int Temp;

    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}

void PrintNumbers(int Num1, int Num2, bool BeforeSwapping = true)
{
    printf("%s Swapping: \tNumber1 = %d\tNumber2 = %d\n", (BeforeSwapping ? "Before" : "After "), Num1, Num2);
}


int main()
{
    int Num1, Num2;
    ReadTwoNumbers(Num1, Num2);

    PrintNumbers(Num1, Num2);
    Swap(Num1, Num2);
    PrintNumbers(Num1, Num2, false);
}