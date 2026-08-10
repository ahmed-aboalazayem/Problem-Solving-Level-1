#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Enter Your Age: ";
    cin >> Info.Age;

    char HasOrNot;
    cout << "Do You Have Driver License [y | n]: ";
    cin >> HasOrNot;
    Info.HasDrivingLicense = HasOrNot == 'y' || HasOrNot == 'Y';

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
    cout << (IsAccepted(Info) ? "Hired." : "Rejected.") << endl;
}

int main()
{
    PrintResult(ReadInfo());
}