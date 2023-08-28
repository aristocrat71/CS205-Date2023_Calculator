#include "proj1.h"
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    cout<<endl;
    ifstream test_file("test_bench.txt");
    int d, m, jump;
    cout<<"The default date is: "<<endl;
    Date2023 defaultdate;
    cout<<"\n\n";
    while(!test_file.eof())
    {
        test_file >> m >> d >> jump;
        Date2023 date(d, m);
        date.plusDay(jump);
    }
    return 0;
}