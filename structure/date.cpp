// Create a structure called Date with members day, month, and year. Write a program to compare two dates and determine which date comes first.
#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct Date date1, date2;
    cout << "enter the day ,month and year of date1: ";
    cin >> date1.day >> date1.month >> date1.year;
    cout << "enter the day , month and year of date2: ";
    cin >> date2.day >> date2.month >> date2.year;
    if (date1.year > date2.year)
    {
        cout << "day2 will come first " << date2.day << " / " << date2.month << " /" << date2.year << endl;
    }
    else if (date2.year > date1.year)
    {
        cout << "day1 will come first " << date1.day << " / " << date1.month << " /" << date1.year << endl;
    }
    else
    {
        if (date1.month > date2.month)
        {
            cout << "day2 will come first " << date2.day << " / " << date2.month << " /" << date2.year << endl;
        }
        else if (date2.month > date1.month)
        {
            cout << "day1 will come first " << date1.day << " / " << date1.month << " /" << date1.year << endl;
        }
        else
        {
            if (date1.day > date2.day)
            {
                cout << "day2 will come first " << date2.day << " / " << date2.month << " /" << date2.year << endl;
            }
            else if (date2.day > date1.day)
            {
                cout << "day1 will come first " << date1.day << " / " << date1.month << " /" << date1.year << endl;
            }
            else
            {
                cout << " both dates are same!" << endl;
            }
        }
    }
        return 0;
    }