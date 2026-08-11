#include <iostream>
#include <string>
using namespace std;


void ReadThreeMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Enter Mark #1: ";
    cin >> Mark1;
    
    cout << "Enter Mark #2: ";
    cin >> Mark2;
    
    cout << "Enter Mark #3: ";
    cin >> Mark3;
}

int SumOfThreeMarks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float AverageOfThreeMarks(int Mark1, int Mark2, int Mark3)
{
    return ((float)SumOfThreeMarks(Mark1, Mark2, Mark3) / 3);
}

void PrintAverage(float Avg)
{
    printf("\nAverage Of Numbers Is: %.2f", Avg);
}


int main()
{
    int Mark1, Mark2, Mark3;
    ReadThreeMarks(Mark1, Mark2, Mark3);
    PrintAverage(SumOfThreeMarks(Mark1, Mark2, Mark3));
}