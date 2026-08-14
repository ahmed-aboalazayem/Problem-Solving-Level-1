#include <iostream>
#include <string>
using namespace std;


float ReadNumber(string Message)
{
    float Number;

    cout << Message << ": ";
    cin >> Number;

    return Number;
}

float ReadTotalSales()
{
    return ReadNumber("Please Enter Total Sales");
}

float GetCommissionPercentage(float TotalSalesAmount)
{

    if (TotalSalesAmount >= 1000000)
        return 0.01;
    
    if (TotalSalesAmount >= 500000)
        return 0.02;
    
    if (TotalSalesAmount >= 100000)
        return 0.03;
    
    if (TotalSalesAmount >= 50000)
        return 0.05;

    return 0;
}

float CalculateTotalCommission(float TotalSales)
{
    return TotalSales * GetCommissionPercentage(TotalSales);
}


int main()
{
    float TotalSales = ReadTotalSales();
    cout << "\nCommission Percentage = " << GetCommissionPercentage(TotalSales) << endl;
    cout << "Total Commission = " << CalculateTotalCommission(TotalSales) << endl;
}