#include <iostream>
#include <string>
using namespace std;


float ReadNumber(string Message)
{
    float Number;

    cout << Message << ": ";
    cin >> Number;

    return Number;
}

void ReadTriangleDimensions(float& Base, float& Height)
{
    Base = ReadNumber("Enter Base Value: ");
    Height = ReadNumber("Enter Height Value: ");
}

float GetTriangleArea(float Base, float Height)
{
    return (Base / 2) * Height;
}

void PrintTriangleArea(float Area)
{
    printf("Triangle Area = %.2f\n", Area);
}


int main()
{
    float Num1, Num2;
    ReadTriangleDimensions(Num1, Num2);
    PrintTriangleArea(GetTriangleArea(Num1, Num2));
}