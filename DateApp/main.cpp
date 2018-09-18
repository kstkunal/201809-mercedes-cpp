#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date date(30,1,1948);
    date.show();
    cout<<date.getDayName();

    long dateValue= date.dateValue();

    cout<<"date value is "<<dateValue<<endl;

    Date date2(dateValue);

    date2.show();


    Date d3(18,9,2018);

    long d3Val=d3.dateValue();

    Date d4(d3Val);

    d3.show();
    d4.show();


    //cout<<Date::daysInMonth(7,2018)<<endl;
    return 0;
}
