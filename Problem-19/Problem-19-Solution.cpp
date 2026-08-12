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

float ReadDiameter()
{
    return ReadNumber("Enter Diameter Value");
}

float GetCircleAreaByDiameter(float Diameter)
{
    const float PI = 3.14159265;
    return (PI * pow(Diameter, 2)) / 4;
}

void PrintCircleArea(float Area)
{
    printf("Circle Area = %.2f\n", Area);
}


int main()
{
    PrintCircleArea(GetCircleAreaByDiameter(ReadDiameter()));
}