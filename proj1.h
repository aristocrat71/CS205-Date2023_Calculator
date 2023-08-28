#include <iostream>
using namespace std;
class Date2023
{
  private: 
    int m, d;
    int daytomonth[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 , 365};
    string weekday[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
  public:
    Date2023();
    Date2023(int);
    Date2023(int, int);
    void setDate(int, int);
    void print();
    void plusDay(int);
};