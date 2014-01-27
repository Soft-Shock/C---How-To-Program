#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int day, int month, int year)
{
    setDay(day);
    setMonth(month);
    setYear(year);
}

void Date::setDay(int day)
{
    mDay = day;
}

int Date::getDay()
{
    return mDay;
}

void Date::setMonth(int month)
{
    if (month < 1 || month > 12)
    {
        mMonth = 1;
        cout << "Invalid month " << month << ". Month is set to " << mMonth << endl;
    }
    else
    {
        mMonth = month;
    }
}

int Date::getMonth()
{
    return mMonth;
}

void Date::setYear(int year)
{
    mYear = year;
}

int Date::getYear()
{
    return mYear;
}

void Date::displayDate()
{
    cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
}