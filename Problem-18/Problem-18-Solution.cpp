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

float ReadCircleRadius()
{
    return ReadNumber("Enter a Circle Radius 'R'");
}

float GetCircleArea(float Radius)
{
    const float PI = 3.14159265;
    return PI * pow(Radius, 2);
}

void PrintCircleArea(float Area)
{
    printf("Circle Area = %.2f\n", Area);
}


int main()
{
    PrintCircleArea(GetCircleArea(ReadCircleRadius()));
}