#include <string.h>
#include <iostream>
using namespace std;

#include "bankaccount.h"


//intialize static fields in a cpp file (NOT IN A HEADER)

double BankAccount::interestRate=9;

BankAccount::BankAccount(int accountNumber, char *name, char *password, double amount, double rate)
{
        this->accountNumber=accountNumber;
        strcpy(this->name,name);
        strcpy(this->password,password);
        this->balance=amount;
        this->interestRate=rate;
}


bool BankAccount::deposit(double amount)
{
    if(amount>0)
    {
        balance+=amount;
        return true;
    }
    else
        return false; //failed.
}

bool BankAccount::withdraw(double amount, char * password)
{

    if(amount<0)
        return false; //negative balance not allowed

    if(!authenticate(password))
    {
        //cout<<"DEBUG: authentication failed"<<endl;
        return false;
    }


    if(amount>balance)
    {
        //cout<<"DEBUG: amount:"<<amount<< " > balance:"<< balance <<endl;
        return false;
    }

    //else if(!authenticate(password))
    //    cout<<"invalid password"<<endl;

    balance-=amount;
    return true;


}

void BankAccount::setName(char *newName)
{

    strcpy(name,newName);
}


void BankAccount::show()
{
    cout<<"account number:"<<accountNumber<<endl
        <<"name:"<<name<<endl
       // <<"password:"<<password<<endl   //password shouldn't be shown
        <<"balance:"<<balance<<endl
        <<"rate:"<<interestRate
        <<endl<<endl;
}

bool BankAccount::authenticate(char* challengePassword)
{

    if( strcmp(this->password, challengePassword)==0)
        return true;
    else
        return false;
}

void BankAccount::changePassword(char *oldPassword, char *newPassword)
{
    //if(authenticate(oldPassword))
        strcpy(password,newPassword);

}




