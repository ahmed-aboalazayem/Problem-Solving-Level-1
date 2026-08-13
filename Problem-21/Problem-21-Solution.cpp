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

float ReadCircleCircumference()
{
    return ReadNumber("Enter The Circle Circumference 'L' ");
}

float GetCircleAreaByCircumference(float L)
{
    const float PI = 3.14159265;
    return pow(L, 2) / (4 * PI);
}

void PrintCircleArea(float Area)
{
    printf("Circle Area = %.2f\n", Area);
}


int main()
{
    PrintCircleArea(GetCircleAreaByCircumference(ReadCircleCircumference()));
}