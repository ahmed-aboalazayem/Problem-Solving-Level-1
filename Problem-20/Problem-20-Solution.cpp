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

float ReadSquareSide()
{
    return ReadNumber("Enter Side length of the square");
}

float GetCircleAreaInscribedInSquare(float SideLength)
{
    const float PI = 3.14159265;
    return (PI * pow(SideLength, 2)) / 4;
}

void PrintCircleArea(float Area)
{
    printf("Circle Area = %.2f\n", Area);
}


int main()
{
    PrintCircleArea(GetCircleAreaInscribedInSquare(ReadSquareSide()));
}