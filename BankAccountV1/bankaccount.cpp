#include <string.h>
#include <iostream>
using namespace std;

#include "bankaccount.h"

BankAccount::BankAccount(int accountNumber, char *name, char *password, double amount, double rate)
{
        this->accountNumber=accountNumber;
        strcpy(this->name,name);
        strcpy(this->password,password);
        this->balance=amount;
        this->interestRate=rate;
}


void BankAccount::deposit(double amount)
{
    if(amount>0)
        balance+=amount;
    else
        cout<<"amount must be greater than 0"<<endl;
}

void BankAccount::withdraw(double amount, char * password)
{
    if(amount<0)
        cout<<"amount must be greater than 0"<<endl;
    else if(amount>balance)
        cout<<"insufficient funds"<<endl;
    else if(strcmp(this->password,password)!=0)
        cout<<"invalid password"<<endl;
    else
    {
        balance-=amount;
        cout<<"please collect your cash";

    }
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
        <<endl;
}

bool BankAccount::authenticate(char* challengePassword)
{

    return strcmp(this->password, challengePassword)==0;
}

void BankAccount::changePassword(char *oldPassword, char *newPassword)
{
    if(authenticate(oldPassword))
        strcpy(password,newPassword);

}




