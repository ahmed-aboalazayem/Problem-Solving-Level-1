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

void ReadTriangleData(float& a, float& b, float& c)
{
    a = ReadNumber("Enter Triangle Side 'A' ");
    b = ReadNumber("Enter Triangle Base 'B' ");
    c = ReadNumber("Enter Triangle Side 'C' ");
}

float GetCircleAreaByATriangle(float a, float b, float c)
{
    const float PI = 3.14159265f;

    float SemiPerimeter = (a + b + c) / 2;

    float TriangleArea =
        sqrt(SemiPerimeter *
            (SemiPerimeter - a) *
            (SemiPerimeter - b) *
            (SemiPerimeter - c));

    float R = (a * b * c) / (4 * TriangleArea);

    return PI * pow(R, 2);
}

void PrintCircleArea(float Area)
{
    printf("Circle Area = %.2f\n", Area);
}



int main()
{
    float A, B, C;
  ReadTriangleData(A, B, C);
  PrintCircleArea(GetCircleAreaByATriangle(A, B, C));
}