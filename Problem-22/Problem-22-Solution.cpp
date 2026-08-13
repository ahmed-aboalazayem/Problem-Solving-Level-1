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

void ReadTriangleData(float& a, float& b)
{
    a = ReadNumber("Enter Triangle Side 'A' ");
    b = ReadNumber("Enter Triangle Base 'B' ");
}

float GetCircleAreaByITriangle(float a, float b)
{
    const float PI = 3.14159265;
    return (PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}

void PrintCircleArea(float Area)
{
    printf("Circle Area = %.2f\n", Area);
}

int main()
{
    float A, B;
  ReadTriangleData(A, B);
  PrintCircleArea(GetCircleAreaByITriangle(A, B));
}