#include <iostream>
using namespace std;


#include "bankaccount.h"

void test_withdraw(BankAccount &account, int amount, char * password, bool expectedOutput, char *message)
{

    //cout<<"DEBUG: Testing "<<message<<endl;
    bool actualResult= account.withdraw(amount,password);

    if(actualResult==expectedOutput)
        cout<<"SUCCESS:\t";
    else
        cout<<"FAILED: \t";

    cout<<message;

    if(actualResult!=expectedOutput)
        cout<<"\t\texpected:"<<expectedOutput<<"\tactual:"<<actualResult;

    cout<<endl<<endl;
}

int main()
{

    char *rightPassword="pass";
    int balance=20000;
    BankAccount a1(1,"Vivek",rightPassword,balance,12);

    test_withdraw(a1,-1,rightPassword, false, "Negative Withdrawal is Not allowed");

    test_withdraw(a1, a1.getBalance()+1, rightPassword, false, "Can't withdraw more than balance");

    test_withdraw(a1, 1, "wrong-password", false, "Can't withdraw with wrong password");

    test_withdraw(a1, 1, rightPassword, true, "Happy Path");


    cout<<"sizeof(a1) is "<<sizeof(a1)<<endl;

    cout<<"sizeof(BankAccount) is "<<sizeof(BankAccount)<<endl;


    return 0;
}
