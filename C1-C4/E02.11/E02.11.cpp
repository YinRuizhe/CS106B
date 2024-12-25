
#include <iostream>
#include "calendar.h"
using namespace std;


int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    for (int i = 1; i <=12; i++)
    {
        cout << monthToString(Month(i)) << " has "<< daysInMonth(Month(i), year) << " days."<<endl;
    }

}


