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

void ReadRectangleDimensions(float &Length, float &Width)
{
    Length = ReadNumber("Enter The Length Value: ");
    Width = ReadNumber("Enter The Width Value: ");
}

float GetRectangleArea(float Length, float Width)
{
    return Length * Width;
}

void PrintRectangleArea(float Area)
{
    printf("Rectangle Area = %.2f\n", Area);
}


int main()
{
    float Num1, Num2;
    ReadRectangleDimensions(Num1, Num2);
    PrintRectangleArea(GetRectangleArea(Num1, Num2));
}
