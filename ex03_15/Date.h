#pragma once
class Date
{
public:
    Date(int day, int month, int year);
    void setDay(int inDay);
    int getDay();
    void setMonth(int inMonth);
    int getMonth();
    void setYear(int inYear);
    int getYear();
    void displayDate();

private:
    int mMonth;
    int mDay, mYear;
};
