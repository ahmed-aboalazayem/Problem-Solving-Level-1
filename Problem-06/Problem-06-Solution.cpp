#include <iostream>
#include <string>
using namespace std;

struct stUserInfo
{
    string FirstName;
    string LastName;
};

stUserInfo ReadUserInfo()
{
    stUserInfo UserInfo;

    cout << "Enter Your First Name: ";
    cin >> UserInfo.FirstName;
    
    cout << "Enter Your Last Name: ";
    cin >> UserInfo.LastName;

    return UserInfo;
}

string GetFullName(stUserInfo UserInfo)
{
    return UserInfo.FirstName + " " + UserInfo.LastName;
}

void PrintFullName(string FullName)
{
    cout << "Your Full Name Is: " << FullName << endl;
}


int main()
{
    PrintFullName(GetFullName(ReadUserInfo()));
}