#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date
{
    public:
        Date(int dd,int mm,int yyyy)
        {
            this->dd=dd;
            this->mm=mm;
            this->yyyy=yyyy;
        }

        Date(long dateValue)
        {
            yyyy=0;
            while(dateValue>365+isLeapYear(yyyy)){
                yyyy++;
                dateValue-= 365+ isLeapYear(yyyy);
            }
            yyyy++;
            mm=1;
            while(dateValue>daysInMonth(mm,yyyy))
            {
                dateValue-=daysInMonth(mm,yyyy);
                mm++;
            }

            dd=dateValue;

        }


        void show()
        {
            cout<<getMonthName()<<' '<<dd<<','<<yyyy<<endl;
        }

        int getDay(){return dd;}
        int getMonth(){return mm;}
        int getYear(){return yyyy;}

        char * getMonthName()
        {
            char * monthNames[]={"",
                            "Januaury","February","March", "April","May", "June",
                            "July","August","September","October","Novemeber","December"
                            };

            return monthNames[mm];
        }

        char * getDayName(); //Sunday-Saturday

        static int daysInMonth(int mm, int yyyy);
        static bool isLeapYear(int yyyy);
        long dateValue();
    protected:

    private:
        int dd,mm,yyyy;




};

#endif // DATE_H
