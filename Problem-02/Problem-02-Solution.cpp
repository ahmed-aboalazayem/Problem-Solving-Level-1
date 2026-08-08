#include <iostream>
#include <string>
using namespace std;

string ReadName()
{
    string Name;
    getline(cin >> ws, Name);
    return Name;
}

int main()
{
    cout << "Please Enter Your Name : ";

    // Using PrintName() Function From Problem #01.
    PrintName(ReadName());
}