#include <iostream>
using namespace std;


#include "bankaccount.h"


int main()
{
    //original interest rate is 9

    BankAccount a1(1,"Vivek","pass", 20000, 12); //interest rate changed to 12 for everyone
    BankAccount a2(1,"Sanjay","pass", 25000, 13); //interest rate changed to 13 for every one




    a1.show();

    a2.show();



    cout<<"sizeof(a1) is "<<sizeof(a1)<<endl;
    cout<<"sizeof(a2) is "<<sizeof(a1)<<endl;
    cout<<"sizeof(BankAccount) is "<<sizeof(BankAccount)<<endl;




    return 0;
}
