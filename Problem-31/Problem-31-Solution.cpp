#include <iostream>
#include <string>
using namespace std;


int ReadNumber(string Message)
{
    int Number;

    cout << Message << ": ";
    cin >> Number;

    return Number;
}

void PowerOf_2_3_4(int Num)
{
    printf("%d^2 = %d\n%d^3 = %d\n%d^4 = %d\n", Num, Num * Num, Num, Num * Num * Num, Num, Num * Num * Num * Num);
}


int main()
{
    PowerOf_2_3_4(ReadNumber("Please Enter a Number"));
}