#include <iostream>
#include <string>
#include <cmath>
using namespace std;


float ReadNumber(string Message)
{
    float Number;

    cout << Message << ": ";
    cin >> Number;

    return Number;
}

void ReadRectangleDimensions(float& Side, float& Diagonal)
{
    Side = ReadNumber("Enter Side Value: ");
    Diagonal = ReadNumber("Enter Diagonal Value: ");
}

float GetRectangleAreaBySideAndDiagonal(float Side, float Diagonal)
{
    return Side * sqrt(pow(Diagonal, 2) - pow(Side, 2));
}

void PrintRectangleArea(float Area)
{
    printf("Rectangle Area = %.2f\n", Area);
}


int main()
{
    float Num1, Num2;
    ReadRectangleDimensions(Num1, Num2);
    PrintRectangleArea(GetRectangleAreaBySideAndDiagonal(Num1, Num2));
}