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


void ReadTriangleDimensions(float &Length, float &Width)
{
    Length = ReadNumber("Enter The Length Value: ");
    Width = ReadNumber("Enter The Width Value: ");
}

float GetTriangleArea(float Length, float Width)
{
    return Length * Width;
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
