#include <iostream>
#include "clsInputValidation.h"
using namespace std;

int main()
{
    cout << clsInputValidation::IsNumberBetween(5, 1, 10) << endl;
    cout << clsInputValidation::IsNumberBetween(100, 1, 10) << endl;
    cout << clsInputValidation::IsNumberBetween(5.5, 1.5, 10.5) << endl;
    cout << clsInputValidation::IsNumberBetween(5.5, 1.5, 4.5) << endl;
    cout << clsInputValidation::IsDateBetween(clsDate(), clsDate(18 , 11 , 2026), clsDate(20 ,11, 2026)) << endl;

    cout << "\nEnter an integer number: ";
    int number = clsInputValidation::ReadIntNumber();
    cout << number << endl;
    cout << clsInputValidation::IsNumberBetween(100, 10, 12) << endl;
    return 0;
}