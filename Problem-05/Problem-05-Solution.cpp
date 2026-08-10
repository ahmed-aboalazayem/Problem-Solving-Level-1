#include <iostream>
#include <string>
using namespace std;

bool ReadYesNo(string Message)
{
    char Answer;

    cout << Message << " [y | n]: ";
    cin >> Answer;

    return (Answer == 'y' || Answer == 'Y');
}

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo Info;
    
    Info.HasRecommendation = ReadYesNo("Do You Have a Recommendation");
    if (Info.HasRecommendation)
        return Info;

    cout << "\nEnter Your Age: ";
    cin >> Info.Age;

    Info.HasDrivingLicense = ReadYesNo("Do You Have Driver License");

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return Info.HasRecommendation || (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
    cout << (IsAccepted(Info) ? "Hired." : "Rejected.") << endl;
}


int main()
{
    PrintResult(ReadInfo());
}