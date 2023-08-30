#include "proj1.h"
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    cout<<endl;
    ifstream test_file("test_bench.txt");
    int d, m, jump;

    cout<<"Default constructor: "<<endl;
    cout<<"The default date is: "<<endl;
    Date2023 defaultdate;
    cout<<"\n\n";

    cout<<"Single parameterized constructor: "<<endl;
    cout<<"50th day is : ";
    Date2023 singledate1(50);
    cout<<"\n185th day is : ";
    Date2023 singledate2(185);
    cout<<"\n370th day is : ";
    Date2023 singledate3(370);
    cout<<"\n";

    cout<<"Double parameterized constructor: "<<endl;
    while(!test_file.eof())
    {
        test_file >> m >> d >> jump;
        Date2023 date(d, m);
        date.plusDay(jump);
    }
    return 0;
}