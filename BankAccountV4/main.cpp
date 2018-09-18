#include <iostream>
using namespace std;


#include "bankaccount.h"


int main()
{
    //original interest rate is 9

    BankAccount a1("Vivek","pass", 20000.0); //interest rate changed to 12 for everyone
    BankAccount a2("Sanjay","pass", 25000.0); //interest rate changed to 13 for every one

    a1.show();

    a2.show();


    cout<<"after chaning interest rate to 15%"<<endl;

    BankAccount::setInterestRate(15); //whose interest is changing here!!!


    a1.show();

    a2.show();


    cout<<"total accounts is "<<BankAccount::getAccountCount()<<endl;

    cout<<"total accounts is "<<a1.getAccountCount()<<endl;

    cout<<"sizeof(a1) is "<<sizeof(a1)<<endl;
    cout<<"sizeof(a2) is "<<sizeof(a1)<<endl;
    cout<<"sizeof(BankAccount) is "<<sizeof(BankAccount)<<endl;




    return 0;
}
