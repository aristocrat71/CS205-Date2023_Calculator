#include "proj1.h"

Date2023::Date2023()
{
    // cout<<"Default constructor not implemented"<<endl;
    d = 1;
    m = 1;
    print();
}

Date2023::Date2023(int dd)
{
    // cout<<"One Parameter constructor not implemented"<<endl;
    if (dd > 0 && dd < 366)
    {
        int i;
        for (i = 1; i < 13; i++)
        {
            if (dd <= daytomonth[i])
            {
                m = i;
                d = dd - daytomonth[i - 1];
                print();
                return;
            }
        }
        print();
    }
    else
    {
        cout << "ERROR Out of bounds" << endl;
        cout << "(The exit(0) is commented out since we still need the program to run double parameterized constructor.)" << endl;
        // exit(0);
    }
}

Date2023::Date2023(int dd, int mm)
{
    // cout<<"Two Parameter constructor not implemented"<<endl;
    if (mm > 0 && mm < 13)
    {
        m = mm;
        if (dd > 0 && dd <= daytomonth[mm] - daytomonth[mm - 1])
            d = dd;
        else
        {
            cout << "ERROR : Invalid date" << endl;
            exit(0);
        }
    }
    else
    {
        m = -1;
        d = -1;
        cout << "ERROR : Invalid date" << endl;
        exit(0);
    }
}

void Date2023::setDate(int dd, int mm)
{
    // cout<<"setDate function not implemented yet"<<endl;
    if (mm > 0 && mm < 13)
    {
        m = mm;
        if (dd > 0 && dd <= daytomonth[mm] - daytomonth[mm - 1])
            d = dd;
        else
        {
            cout << "ERROR : Invalid date" << endl;
            exit(0);
        }
    }
    else
    {
        m = -1;
        d = -1;
        cout << "ERROR : Invalid date" << endl;
        exit(0);
    }
}

void Date2023::print()
{
    // cout<<"print function not implemented yet"<<endl;
    string day;
    int temp;
    if (d != -1)
    {
        temp = daytomonth[m - 1] + d;
        day = weekday[(temp - 1) % 7];
        cout << day << ", " << months[m - 1] << " " << d << ", 2023";
    }
    else
    {
        cout << "A date not in 2023." << endl;
    }
}

void Date2023::plusDay(int days)
{
    // cout<<"plusDay function not implemented yet"<<endl;
    cout << days << " days after ";
    print();
    int tempday = daytomonth[m - 1] + days + d;
    int i;
    if (tempday > 365)
        cout << " is a date not in 2023." << endl;
    else
    {
        for (i = 1; i < 13; i++)
        {
            if (tempday <= daytomonth[i])
            {
                m = i;
                d = tempday - daytomonth[i - 1];
                break;
            }
        }
        cout << " is ";
        print();
        cout << "." << endl;
    }
}