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

int ReadNonNegativeNumber(string Message)
{
    int Num = ReadNumber(Message);

    while (Num < 0)
    {
        cout << "Invalid Number, Please Enter Non-Negative Number.!" << endl;
        Num = ReadNumber(Message);
    }

    return Num;
}

int Power(int Num, int M)
{
    int MultiResult = 1;

    for (int i = 1; i <= M; i++)
        MultiResult *= Num;

    return MultiResult;
}



int main()
{
    int Num = ReadNonNegativeNumber("Please Enter a Number"), M = ReadNonNegativeNumber("Please Enter The Power");
    printf("\n%d^%d = %d\n", Num, M, Power(Num, M));
}