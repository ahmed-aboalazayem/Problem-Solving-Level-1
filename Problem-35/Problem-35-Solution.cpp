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

struct stPiggyBankContent
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;

    PiggyBankContent.Pennies = ReadNumber("Enter Total Pennies");
    PiggyBankContent.Nickels = ReadNumber("Enter Total Nickels");
    PiggyBankContent.Dimes = ReadNumber("Enter Total Dimes");
    PiggyBankContent.Quarters = ReadNumber("Enter Total Quarters");
    PiggyBankContent.Dollars = ReadNumber("Enter Total Dollars");

    return PiggyBankContent;
}

int CalculateTotalPennies(const stPiggyBankContent PiggyBankContent)
{
    return PiggyBankContent.Pennies + PiggyBankContent.Nickels * 5 + PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;
}

float CalculateTotalDollars(int TotalPennies)
{
    return (float)TotalPennies / 100;
}



int main()
{
    stPiggyBankContent PiggyBankContent = ReadPiggyBankContent();
    int TotalPennies = CalculateTotalPennies(PiggyBankContent);
    cout << "\t" << TotalPennies << " Pennies." << endl;
    cout << "\t" << CalculateTotalDollars(TotalPennies) << " Dollars." << endl;
}