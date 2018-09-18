#include "Date.h"


bool Date::isLeapYear(int year)
{
    return year%400==0 || year%4==0 && year%100!=0;

}

int Date::daysInMonth(int mm,int yyyy)
{
    if (mm==2)
        if(isLeapYear(yyyy))
            return 29;
        else
            return 28;
    else if(mm<7 && mm%2==0 || mm>7 && mm%2!=0)
            return 30;
    else
            return 31;

}



//Assume base known date to be Jan 1, 1900 --> Monday




long Date::dateValue()
{
    int prevYear= yyyy-1;

    int daysTillPreviousYear =   prevYear*365  //rough value without considering leap year
                               + prevYear/4    // every 4th year is a leap year
                               - prevYear/100   // every 100th year may not be a leap year
                               + prevYear/400 ;  // every 400th year will be a leap year


    int daysTillPreviousMonth=0;

    for(int i=1;i<mm;i++)
    {
        daysTillPreviousMonth+= daysInMonth(i,yyyy); //should return 28,29,30 or 31
    }

    return daysTillPreviousYear+daysTillPreviousMonth+dd;
}


char * Date::getDayName()
{
    char * dayNames[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
    int x=0;
    Date baseDate(1,1,1900);
    long baseDateValue=baseDate.dateValue();

    long currentDateValue= dateValue();

    long diff= currentDateValue-baseDateValue;

    x=diff%7;


    return dayNames[x];
}
