// exc03_15.cpp

#include "Date.h"
#include <iostream>

using namespace std;

int main()
{
    Date date1(1, 2, 2014);

    cout << "Initial\n"
        "Day: " << date1.getDay()
        << "\nMonth: " << date1.getMonth()
        << "\nYear: " << date1.getYear()
        << "\nFormated Date: ";
    date1.displayDate();
    cout << endl;

    date1.setDay(31);
    date1.setMonth(13);
    date1.setYear(2015);

    cout << "Modified\n"
        "Day: " << date1.getDay()
        << "\nMonth: " << date1.getMonth()
        << "\nYear: " << date1.getYear()
        << "\nFormated Date: ";
    date1.displayDate();
    cout << endl;
}