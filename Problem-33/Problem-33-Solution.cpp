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

bool ValidateNumberInRange(int Number, int Min, int Max)
{
    return (Number >= Min && Number <= Max);
}

int ReadValidGrade()
{
    int Grade = ReadNumber("Please Enter Your Grade");

    while (!ValidateNumberInRange(Grade, 0, 100))
    {
        cout << "Invalid Grade :-(" << endl;
        Grade = ReadNumber("Please Enter Your Grade");
    }

    return Grade;
}

char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
        return 'A';

    if (Grade >= 80)
        return 'B';

    if (Grade >= 70)
        return 'C';

    if (Grade >= 60)
        return 'D';

    if (Grade >= 50)
        return 'E';

    return 'F';
}



int main()
{
    char StudentGradeLetter = GetGradeLetter(ReadValidGrade());
    cout << "Student Grade Letter Is " << StudentGradeLetter << endl;
}